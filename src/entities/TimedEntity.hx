package entities;
import nape.phys.*;
import flash.utils.Timer;
import flash.events.TimerEvent;
import com.haxepunk.HXP;
class TimedEntity extends PhysicalEntity {
	var time:Float;
	public function new(b:BodyType, timeout:Float) {
		super(b);
		time = timeout;
	}
	public override function update() {
		super.update();
		time -= HXP.elapsed;
		if(time < 0)
			trigger();
	}
	public function trigger() {
		this.destroy();
	}
}