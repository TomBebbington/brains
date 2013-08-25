import com.haxepunk.*;
import com.haxepunk.debug.Console;
import flash.Lib.current;
import scenes.*;
class Game {
	static function main() {
		var e = new Engine(current.stage.stageWidth, current.stage.stageHeight, 60, false, RenderMode.BUFFER);
		current.stage.addChild(e);
		HXP.scene = new #if debug Play #else Title #end ();
		
		//HXP.console.enable();
	}
}