local shaderEnabled = false

function onEvent(name, value1, value2)
    if name == 'StageSwap' then
        if tonumber(value1) == 1 then
            if not shaderEnabled then
                -- Enable shader
                initLuaShader('sparkle')
                makeLuaSprite('shaderOverlay')
                makeGraphic('shaderOverlay', screenWidth, screenHeight, '000000')
                setObjectCamera('shaderOverlay', 'camHUD')
                setSpriteShader('shaderOverlay', 'sparkle')
                setBlendMode('shaderOverlay', 'add')
                addLuaSprite('shaderOverlay', true)
                shaderEnabled = true
            else
                -- Disable shader
                removeLuaSprite('shaderOverlay', true)
                shaderEnabled = false
            end
        end
        -- value2 is ignored
    end
end

function onUpdatePost()
    if shaderEnabled then
        setShaderFloat('shaderOverlay', 'iTime', getSongPosition() / 1000)
    end
end