package entities;
import com.haxepunk.graphics.prototype.Rect;
import nape.phys.*;
import nape.shape.*;
import nape.callbacks.*;
import com.haxepunk.graphics.Backdrop;
import flash.display.BitmapData;
class Wall extends PhysicalEntity {
	public static var collisionType:CbType = new CbType();
	public function new(width:Int = 15, height:Int = 15, color:Int = 0xFFFFFFFF) {
		super(BodyType.STATIC);
		this.graphic = new Backdrop(new BitmapData(width == -1 ? 15 : width, height == -1 ? 15 : height), width == -1, height == -1);
		this.body.shapes.add(new Polygon(Polygon.rect(0, 0, width == -1 ? 10000 : width, height == -1 ? 10000 : height)));
		body.cbTypes.add(Wall.collisionType);
		this.width = width;
		this.height = height;
	}
}