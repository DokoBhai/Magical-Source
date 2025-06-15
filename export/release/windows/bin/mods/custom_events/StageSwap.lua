local shaderEnabled = false
luaDebugMode = true

function onEvent(name, value1, value2)
    if name == 'StageSwap' then
        shaderEnabled = true
        setSpriteShader("shaderSprite", "sparkle")
        setObjectCamera("shaderSprite", "hud")
        setProperty("shaderSprite.alpha", 0.5)
        addLuaSprite("shaderSprite", true)
    
    end
end

function onCreatePost()
    initLuaShader("sparkle")
    makeLuaSprite("shaderSprite")
    makeGraphic("shaderSprite", screenWidth, screenHeight)
end

function onUpdate(elapsed)
    if shaderEnabled == true then

        setShaderFloat("shaderSprite", "iTime", getSongPosition() / 1000)
        setShaderFloat("shaderSprite", "iResolution", screenWidth, screenHeight)
    end
end
