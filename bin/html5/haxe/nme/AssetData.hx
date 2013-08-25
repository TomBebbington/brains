package nme;


import openfl.Assets;


class AssetData {

	
	public static var className = new Map <String, Dynamic> ();
	public static var library = new Map <String, LibraryType> ();
	public static var path = new Map <String, String> ();
	public static var type = new Map <String, AssetType> ();
	
	private static var initialized:Bool = false;
	
	
	public static function initialize ():Void {
		
		if (!initialized) {
			
			path.set ("gfx/preloader/haxepunk.png", "gfx/preloader/haxepunk.png");
			type.set ("gfx/preloader/haxepunk.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("gfx/debug/console_play.png", "gfx/debug/console_play.png");
			type.set ("gfx/debug/console_play.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("gfx/debug/console_step.png", "gfx/debug/console_step.png");
			type.set ("gfx/debug/console_step.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("gfx/debug/console_debug.png", "gfx/debug/console_debug.png");
			type.set ("gfx/debug/console_debug.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("gfx/debug/console_pause.png", "gfx/debug/console_pause.png");
			type.set ("gfx/debug/console_pause.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("gfx/debug/console_logo.png", "gfx/debug/console_logo.png");
			type.set ("gfx/debug/console_logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("gfx/debug/console_output.png", "gfx/debug/console_output.png");
			type.set ("gfx/debug/console_output.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("font/04B_03__.ttf", nme.NME_font_04b_03___ttf);
			type.set ("font/04B_03__.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/bg.png", "assets/bg.png");
			type.set ("assets/bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		}
		
	}
	
	
}









class NME_font_04b_03___ttf extends flash.text.Font { }

