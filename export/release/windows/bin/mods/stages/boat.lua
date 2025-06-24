local scrollSpeed = 100 -- pixels per second
local spriteWidth = 2000
local startX = -200
function onCreate()
    --Make the sprites :)
    makeLuaSprite('F', 'boat/grouund',-200,0)
    --Adding the sprites :)
    setGraphicSize('S', 2000, 1000)
    setGraphicSize('F', 2000, 1000)
   
    makeLuaSprite('S1', 'boat/loop', startX, 0)
    makeLuaSprite('S2', 'boat/loop', startX + spriteWidth, 0)

    setGraphicSize('S1', spriteWidth, 1000)
    setGraphicSize('S2', spriteWidth, 1000)

    addLuaSprite('S1', false)
    addLuaSprite('S2', false)
    addLuaSprite('F',false)
end

function onUpdate(elapsed)
    -- Move both sprites
    setProperty('S1.x', getProperty('S1.x') - scrollSpeed * elapsed)
    setProperty('S2.x', getProperty('S2.x') - scrollSpeed * elapsed)

    -- Reset if out of view
    if getProperty('S1.x') <= -spriteWidth then
        setProperty('S1.x', getProperty('S2.x') + spriteWidth)
    end
    if getProperty('S2.x') <= -spriteWidth then
        setProperty('S2.x', getProperty('S1.x') + spriteWidth)
    end
end


-- charz is a fucking idiot and didn't set the scroll factor