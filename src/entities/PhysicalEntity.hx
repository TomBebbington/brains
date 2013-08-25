package entities;
import com.haxepunk.*;
import flash.geom.Point;
import nape.phys.*;
import nape.geom.*;
class PhysicalEntity extends Entity {
	public var body:Body;
	public function new(b:BodyType) {
		super();
		this.body = new Body(b, new Vec2(this.x, this.y));
		this.body.allowRotation = false;
		body.userData.entity = this;
	}
	public override function update() {
		super.update();
		this.moveTo(body.position.x, body.position.y);
		if(this.body == null)
			this.destroy();
	}
	public inline function move(x:Float, y:Float):Void {
		this.body.position.setxy(this.x = x, this.y = y);
	}
	public function destroy() {
		if(body != null && body.space != null)
			body.space = null;
		this.active = false;
		this.scene.remove(this);
	}
}