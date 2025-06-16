luaDebugMode = true

local shaderEnabled = true  -- enable the shader from start

function onCreate()
    -- Initialize your shader (must be in your assets/shaders folder)
    initLuaShader("Fire")

    -- Create a sprite that covers the screen and apply the shader
    makeLuaSprite("shadeSprite")
    makeGraphic("shadeSprite", screenWidth, screenHeight, nil) -- nil = transparent
    setSpriteShader("shadeSprite", "Fire")
    setObjectCamera("shadeSprite", "hud")
    addLuaSprite("shadeSprite", true)

    -- Make sure alpha is full and visible
    setProperty("shadeSprite.alpha", 0)
    setProperty("shadeSprite.visible", true)
    setProperty('shadeSprite.angle', 180)
    setShaderSampler2D("shadeSprite", "iChannel1", "noiseTex")
end

function onEvent(name,v1,v2)
    if name == 'Fire' then
        setProperty('shadeSprite.alpha', 0.5)
    end
end


function onUpdate(elapsed)
    if shaderEnabled then
        -- Update iTime uniform each frame using the current song position in seconds
        setShaderFloat("shadeSprite", "iTime", getSongPosition() / 1000)
    end
end