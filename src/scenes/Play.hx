package scenes;
import com.haxepunk.*;
import com.haxepunk.utils.*;
import com.haxepunk.graphics.*;
import com.haxepunk.graphics.prototype.*;
import entities.*;
import nape.space.*;
import nape.geom.*;
import nape.util.BitmapDebug;
import flash.utils.Timer;
import flash.events.TimerEvent;
import flash.display.BitmapData;
class Play extends Scene {
	public static inline var DEATH = "death";
	public static var current(default, null):Play = null;
	static var maxZombies(get, never):Int;
	static inline function get_maxZombies()
		return 4 + Std.int(HXP.width / 128);
	public var space:Space;
	public var players:Array<Player>;
	public var zombies:Array<Zombie>;
	var floor:Wall;
	public var round:Int;
	public var score:Int;
	public var scoreText:Text;
	public var emitter:Emitter;
	public override function begin() {
		current = this;
		score = 0;
		HXP.camera.x = 0;
		HXP.camera.y = 0;
		this.round = 1;
		this.zombies = [];
		this.space = new Space(new Vec2(0, 200));
		this.addGraphic(new Backdrop("assets/bg.png"));
		this.addGraphic(scoreText = new Text("Score"));
		var bd:BitmapData = new BitmapData(6, 3, true, 0);
		bd.setPixel32(1, 1, 0xffffffff);
		bd.fillRect(new flash.geom.Rectangle(3, 0, 3, 3), 0xffffffff);
		this.addGraphic(emitter = new Emitter(bd, 3, 3));
		emitter.relative = false;
		emitter.newType(DEATH, [0]);
		emitter.setMotion(DEATH, 0, 10, 0.5, 360, 25, 0.5);
		emitter.setColor(DEATH, 0xFFC00000, 0xFFFF0000);
		scoreText.color = 0xFFFFFFFF;
		scoreText.size = Std.int(HXP.height * 0.05);
		Input.define("left", [Key.LEFT, Key.A]);
		Input.define("right", [Key.RIGHT, Key.D]);
		Input.define("jump", [Key.UP, Key.W, Key.SPACE, Key.X, Key.Z]);
		Input.define("shoot", [Key.SHIFT, Key.C]);
		players = [];
		var p = new Player();
		addPhysical(p);
		players.push(p);
		this.floor = new Wall(-1);
		floor.move(-5000, HXP.height - floor.height);
		addPhysical(floor);
		for(i in 0...Math.floor(HXP.height / 150)) {
			var p = new Wall(Std.int(HXP.width * 0.5 - i * 150));
			p.moveTo(i * 75, HXP.height - floor.height * (i + 1) * 6);
			this.addPhysical(p);
		}
		var t = new Timer(10000);
		t.start();
		t.addEventListener(TimerEvent.TIMER, function(_) {
			t.repeatCount = 1000;
			for(_ in 0...round)
				spawnZombie();
		});
		this.add(new RoundTrigger(round));
	}
	public function incrementRound():Void {
		this.add(new RoundTrigger(++round));
	}
	public inline function addPhysical(p:PhysicalEntity):PhysicalEntity {
		this.add(p);
		p.move(p.x, p.y);
		p.body.space = this.space;
		return p;
	}
	public function spawnZombie():Void {
		var z = new Zombie();
		addPhysical(z);
		z.body.position.y = 0;
		z.body.position.x = HXP.camera.x + (Math.random() < 0.5 ? -z.width * 2 : HXP.width + z.width);
		zombies.push(z);
	}
	public override function update() {
		super.update();
		this.space.step(HXP.elapsed);
		for(z in zombies)
			z.approach(players);
		var min:Float = 0, max:Float = 0;
		HXP.camera.x = (players.length == 1 ? players[0].centerX : {
			var total:Float = 0;
			for(p in players) {
				min = Math.min(min, p.centerX);
				max = Math.max(max, p.centerX);
				total += p.x;
			}
			max - min > HXP.width ? min : total / players.length;
		}) - HXP.width * 0.5;
		if(max - min > HXP.width)
			HXP.screen.scale = HXP.width / (max - min);
		scoreText.x = HXP.camera.x;
		scoreText.text = 'Score: $score';
		if(score > round << 5)
			incrementRound();
	}
	public function earnScore(s:Int, e:Entity):Void {
		this.score += s;
	}
	public function restart():Void {
		HXP.scene = new Play();
	}
	public function exit():Void {
		HXP.scene = new Title();
	}
}