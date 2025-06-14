function onCreate()
    --Make the sprites 
    makeLuaSprite('B', '100acrewoods/SkyDay',0, 0)
    makeLuaSprite('N', '100acrewoods/SkyNight',0, 0)
    makeLuaSprite('S', '100acrewoods/trees',0, 0)
    makeLuaSprite('G', '100acrewoods/ground',0, 0)
    makeLuaSprite('F', '100acrewoods/foreground1',0, 0)
    makeLuaSprite('O', '100acrewoods/overlay',0, 0)

    --Hiding the sprites 
    setProperty('N.visible' , false)
    setProperty('O.visible' , false)

    --Adding the sprites 
    setGraphicSize('B', 2600, 1300)
    setGraphicSize('S', 2600, 1300)
    setGraphicSize('G', 2600, 1300)
    setGraphicSize('F', 2600, 1300)
    setGraphicSize('N', 2600, 1300)
    setGraphicSize('O', 2600, 1300)

    --Order Of the sprites :(
    addLuaSprite('B',false)
    addLuaSprite('N',false)
    addLuaSprite('S',false)
    addLuaSprite('G',false)
    addLuaSprite('F',true)
    addLuaSprite('O',true)
end

-- Adding nightsky :)
function onEvent(E, value1, value2)
    if E == 'StageSwap' then
        setProperty('N.visible' , true)
        setProperty('O.visible' , true)
        --initLuaShader("sparkle")
        --setSpriteShader("camGame", sparkle)
        --runTimer('endShader', 5)
    end
end

--function onTimerCompleted(tag)
    --if tag == 'endShader' then
        --setSpriteShader('camGame', null)
    --end
--end 

--doko is a cheeseburber (peanr) >:(
