local shaderEnabled = false
luaDebugMode = true

function onEvent(name, value1, value2)
    if name == 'StageSwap' then
        if tonumber(value1) == 1 then
            if not shaderEnabled then
                print("Enabling shader overlay")

                -- Init shader and sprite
                initLuaShader('sparkle')
            if shaderEnabled then
                setShaderFloat('shaderOverlay', 'iTime', getSongPosition() / 1000)
                setShaderVec2('shaderOverlay', 'iResolution', {screenWidth, screenHeight})
            end


                makeLuaSprite('shaderOverlay', '', 0, 0)
                makeGraphic('shaderOverlay', screenWidth, screenHeight, '000000')
                setObjectCamera('shaderOverlay', 'camHUD')
                setSpriteShader('shaderOverlay', 'sparkle')
                setBlendMode('shaderOverlay', 'add')
                addLuaSprite('shaderOverlay', true)

                shaderEnabled = true
            else
                print("Disabling shader overlay")

                if getLuaSprite('shaderOverlay') ~= nil then
                    removeLuaSprite('shaderOverlay', true)
                else
                    print("Warning: shaderOverlay sprite not found on disable")
                end

                shaderEnabled = false
            end
        end
    end
end

function onUpdatePost()
    if shaderEnabled then
        -- Check if sprite exists before updating shader uniforms
        if getLuaSprite('shaderOverlay') ~= nil then
            setShaderFloat('shaderOverlay', 'iTime', getSongPosition() / 1000)
            setShaderVec2('shaderOverlay', 'iResolution', {screenWidth, screenHeight})
        else
            print("Warning: shaderOverlay sprite not found on update")
            shaderEnabled = false -- disable to avoid repeated errors
        end
    end
end
