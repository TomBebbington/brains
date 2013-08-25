package entities;
import com.haxepunk.*;
import com.haxepunk.graphics.prototype.*;
import nape.phys.*;
import nape.shape.*;
import nape.callbacks.*;
import nape.geom.Vec2;
class Bullet extends TimedEntity {
	public static var collisionType:CbType = new CbType();
	public static inline var SPEED = 2000.0;
	public static inline var TIMEOUT = 0.2;
	public var dir:Int;
	public function new(dir:Int) {
		super(BodyType.DYNAMIC, 10);
		this.dir = dir;
		this.graphic = new Rect(10, 3, 0xFF000000);
		this.body.shapes.add(new Polygon(Polygon.rect(0, 0, 10, 3)));
		this.body.isBullet = true;
		this.body.cbTypes.add(collisionType);
		body.velocity.x = dir * SPEED;
	}
}