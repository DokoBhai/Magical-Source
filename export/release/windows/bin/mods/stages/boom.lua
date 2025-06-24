function onCreate()
    --Make the sprites :)
    makeLuaSprite('B', 'BG/background',-200,0)
    makeLuaSprite('S', 'BG/sky',-200,0)
    makeLuaSprite('G', 'BG/ground',-200,0)
    makeLuaSprite('F', 'BG/foreground',-200,0)
    --Adding the sprites :)
    setGraphicSize('B', 2000, 1000)
    setGraphicSize('S', 2000, 1000)
    setGraphicSize('G', 2000, 1000)
    setGraphicSize('F', 2000, 1000)
    addLuaSprite('S',false)
    addLuaSprite('B',false)
    addLuaSprite('G',false)
    addLuaSprite('F',true)

end


-- charz is a fucking idiot and didn't set the scroll factor