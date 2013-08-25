package entities;
import com.haxepunk.*;
import flash.display.BitmapData;
import com.haxepunk.graphics.Emitter;
import com.haxepunk.graphics.*;
import com.haxepunk.graphics.prototype.*;
import nape.phys.*;
import nape.callbacks.*;
class Person extends PhysicalEntity {
	public var collisionType:CbType;
	public var health:Float;
	var canJump:Bool = false;
	var wallListener:InteractionListener;
	var bulletListener:InteractionListener;
	public function new(x:Float = 0, y:Float = 0) {
		this.health = 1;
		super(BodyType.DYNAMIC);
		body.cbTypes.add(collisionType = new CbType());
	}
	public override function added() {
		super.added();
		var s = scenes.Play.current.space;
		wallListener = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Wall.collisionType, this.collisionType, collideWall);
		wallListener.space = s;
		bulletListener = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Bullet.collisionType, this.collisionType, collideBullet);
		bulletListener.space = s;
	}
	public override function destroy() {
		var s = this.body.space;
		if(s != null) {
			s.listeners.remove(wallListener);
			s.listeners.remove(bulletListener);
		}
		super.destroy();
	}
	private function collideWall(c:InteractionCallback):Void {
		var other:Entity = c.int1.userData.entity;
		if(Math.abs(other.top - this.bottom) < this.halfHeight)
			canJump = true;
	}
	private function collideBullet(c:InteractionCallback):Void {
		loseHealth(0.5);
		c.int1.userData.entity.destroy();
	}
	public function loseHealth(h:Float):Void {
		if(this.health > 0)
			for(_ in 0...Std.int(h * 50))
				scenes.Play.current.emitter.emit(scenes.Play.DEATH, this.centerX, this.centerY);
		this.health -= h;
		if(this.health <= 0)
			die();
	}
	public function die() {
		this.destroy();
	}
	public function jump() {
		if(!canJump)
			return;
		this.body.velocity.y = -height * 4;
		canJump = false;
	}
}