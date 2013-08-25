package scenes;
import com.haxepunk.*;
import com.haxepunk.utils.*;
import com.haxepunk.graphics.*;
import com.haxepunk.graphics.prototype.*;
import entities.*;
class Title extends Scene {
	public var play:Text;
	public override function begin() {
		this.addGraphic(new Rect(HXP.width, HXP.height, 0xFF000000));
		var title:Text = new Text("Brains...");
		title.size = 100;
		title.x = HXP.halfWidth - title.textWidth * 0.5;
		title.y = 50;
		this.addGraphic(title);
		play = new Text("Play");
		play.size = 50;
		play.y = HXP.height - play.textHeight * 5;
		play.x = (HXP.width - play.textWidth * play.scale) * 0.5;
		this.addGraphic(play);
	}
	public override function update() {
		super.update();
		if(Input.pressed(Key.SPACE) || (Input.mousePressed && Input.mouseX > play.x && Input.mouseY > play.y && Input.mouseX < play.x + play.width * play.scale && Input.mouseY < play.y + play.textHeight * play.scale)) {
			HXP.scene = new Play();
		}
	}
}