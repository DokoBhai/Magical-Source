local shaderEnabled = false
local fade = 0

function onCreatePost()
    initLuaShader("sparkle")
    makeLuaSprite("shaderSprite")
    makeGraphic("shaderSprite", screenWidth, screenHeight)
    setSpriteShader("shaderSprite", "sparkle")
    setObjectCamera("shaderSprite", "hud")
    addLuaSprite("shaderSprite", true)
    setShaderFloat("shaderSprite", "uFade", 0)
    setProperty("shaderSprite.alpha", 1)
    setProperty("shaderSprite.visible", false)
end

function onEvent(name, value1, value2)
    if name == 'StageSwap' then
        shaderEnabled = true
        fade = 0
        setProperty("shaderSprite.visible", true)
        runTimer('fadeInShader', 0.01, 100)
    end
end

function onTimerCompleted(tag, loops, loopsLeft)
    if tag == 'fadeInShader' then
        fade = fade + 0.01
        if fade > 1 then fade = 1 end
        setShaderFloat("shaderSprite", "uFade", fade)
    end
end

function onUpdate(elapsed)
    if shaderEnabled then
        setShaderFloat("shaderSprite", "iTime", getSongPosition() / 1000)
    end
end
