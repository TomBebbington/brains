package entities;
import com.haxepunk.*;
import com.haxepunk.graphics.Text;
import com.haxepunk.tweens.motion.*;
class RoundTrigger extends Entity {
	var t:Text;
	public function new(r:Int) {
		super();
		t = new Text('Round $r');
		t.size = 40;
		t.color = 0xFFFFFFFF;
		this.addGraphic(t);
		this.y = HXP.height;
		this.layer = 0;
	}
	public override function update() {
		this.width = t.textWidth;
		this.height = t.textHeight;
		this.moveTo(HXP.camera.x + HXP.halfWidth - this.halfWidth, this.y - height * HXP.elapsed * 2);
		if(this.centerY > HXP.halfHeight)
			t.size++;
		else
			t.size--;
		if(this.bottom < 0)
			this.scene.remove(this);
	}
}