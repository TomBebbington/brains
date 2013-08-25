package entities;
import com.haxepunk.graphics.prototype.*;
import com.haxepunk.utils.*;
import com.haxepunk.*;
import nape.shape.*;
import nape.callbacks.*;
class Player extends Person {
	static inline var WIDTH = 24;
	static inline var HEIGHT = 48;
	var bulletTimeout:Float;
	var dir:Int;
	public function new() {
		super();
		this.bulletTimeout = 0;
		this.graphic = new Rect(WIDTH, HEIGHT, 0xFFCDC0FF);
		this.body.shapes.add(new Polygon(Polygon.rect(0, 0, WIDTH, HEIGHT)));
		//body.constraintVelocity.x = width * 3;
		this.width = WIDTH;
		this.height = HEIGHT;
		this.dir = 1;
		this.move((HXP.width - width) * 0.5, HXP.height - 100 - Std.random(200));
	}
	public override function update() {
		if(Input.check("left") || Input.mouseX < HXP.halfWidth - halfWidth) {
			this.dir = -1;
			body.velocity.x = -width * 3;
		} else if(Input.check("right") || Input.mouseX > HXP.halfWidth + halfWidth) {
			this.dir = 1;
			body.velocity.x = width * 3;
		}
		super.update();
		if(Input.check("jump") || Input.mouseY < this.top)
			jump();
		if((Input.check("shoot") || Input.mouseDown) && bulletTimeout <= 0) {
			shoot();
			bulletTimeout = Bullet.TIMEOUT;
		} else if(bulletTimeout > 0)
			bulletTimeout -= HXP.elapsed;
	}
	public override function loseHealth(h:Float):Void {
		scenes.Play.current.earnScore(-Std.int(h * 8), this);
		super.loseHealth(h);
	}
	var dead:Bool = false;
	public override function die() {
		this.destroy();
		if(!dead) {
			haxe.Timer.delay(function()
				scenes.Play.current.restart(), 1500);
			dead = true;
		}
	}
	public function shoot():Bullet {
		var b = new Bullet(this.dir);
		b.move(dir > 0 ? this.right + width * 0.5 : this.left - this.width * 1, this.centerY);
		scenes.Play.current.addPhysical(b);
		return b;
	}
}