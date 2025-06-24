local shaderName = "TV"
function onCreate()
    shaderCoordFix() -- initialize a fix for textureCoord when resizing game window

    makeLuaSprite("TV")
    makeGraphic("shaderImage", screenWidth, screenHeight)
    addLuaSprite("shaderImage", true) -- Add the sprite to the stage so it exists in Haxe

    setSpriteShader("shaderImage", "TV")


    runHaxeCode([[
        var shaderName = "]] .. shaderName .. [[";
        
        game.initLuaShader(shaderName);
        
        var shader0 = game.createRuntimeShader(shaderName);
        game.camGame.setFilters([new ShaderFilter(shader0)]);
        if (game.getLuaObject("shaderImage") != null) {
            game.getLuaObject("shaderImage").shader = shader0;
            game.camHUD.setFilters([new ShaderFilter(game.getLuaObject("shaderImage").shader)]);
        } else {
            trace('shaderImage sprite not found when setting shader!');
        }
        return;
    ]])
end

function onUpdate(elapsed)
    setShaderFloat("TV", "iTime", os.clock())
 end

function shaderCoordFix()
    runHaxeCode([[
        resetCamCache = function(?spr) {
            if (spr == null || spr.filters == null) return;
            spr.__cacheBitmap = null;
            spr.__cacheBitmapData = null;
        }
        
        fixShaderCoordFix = function(?_) {
            resetCamCache(game.camGame.flashSprite);
            resetCamCache(game.camHUD.flashSprite);
            resetCamCache(game.camOther.flashSprite);
        }
    
        FlxG.signals.gameResized.add(fixShaderCoordFix);
        fixShaderCoordFix();
        return;
    ]])
    
    local temp = onDestroy
    function onDestroy()
        runHaxeCode([[
            FlxG.signals.gameResized.remove(fixShaderCoordFix);
            return;
        ]])
        if (temp) then temp() end
    end
end