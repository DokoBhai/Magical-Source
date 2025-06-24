function onCreate()
    --Make the sprites :)
    makeLuaSprite('B', 'ship/shipfront',-300,-500)
    makeLuaSprite('S', 'ship/shiproom',-300,-500)
    --Adding the sprites :)
    setGraphicSize('B', 2000, 1500)
    setGraphicSize('S', 2000, 1500)
    addLuaSprite('S',false)
    addLuaSprite('B',false)
    setObjectOrder('gfGroup',getObjectOrder('S')+1)
end


-- charz is a fucking idiot and didn't set the scroll factor