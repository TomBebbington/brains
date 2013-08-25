package entities;
import com.haxepunk.*;
import com.haxepunk.utils.*;
import com.haxepunk.graphics.prototype.Rect;
import nape.phys.*;
import nape.shape.*;
import nape.callbacks.*;
import scenes.*;
class Zombie extends Person {
	static inline var WIDTH = 24;
	static inline var HEIGHT = 48;
	public var speed:Float;
	var playerListener:Listener;
	public function new() {
		super();
		this.body.shapes.add(new Polygon(Polygon.rect(0, 0, WIDTH, HEIGHT)));
		this.move(0, 0);
		this.graphic = new Rect(WIDTH, HEIGHT, 0xFF00FF00);
		this.setHitbox(WIDTH, HEIGHT);
		this.speed = width * (1 + Math.random() * 2);
	}
	public override function added() {
		super.added();
		playerListener = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Play.current.players[0].collisionType, this.collisionType, collidePlayer);
		playerListener.space = this.body.space;
	}
	public function collidePlayer(c:InteractionCallback) {
		var player:Player = cast c.int1.userData.entity;
		player.loseHealth(0.5);
	}
	public function approach(ps:Array<Player>) {
		var maxVal = 0.0;
		var p:Player = null;
		for(pl in ps) {
			var v = HXP.distance(this.centerX, this.centerY, pl.centerX, pl.centerY);
			if(p == null || v > maxVal || pl.bottom < p.bottom) {
				maxVal = v;
				p = pl;
			}
		}
		if(Math.abs(p.centerX - centerX) < 5) {}
		else if(p.centerX > this.centerX)
			body.velocity.x = speed;
		else if(p.centerX < this.centerX)
			body.velocity.x = -speed;
		if(p.bottom < this.bottom)
			jump();
	}
	public override function die() {
		Play.current.earnScore(10, this);
		super.die();
	}
}