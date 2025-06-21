function onEvent(e, v1, v2)
    if e == 'Hide KHHudE' then
        doTweenAlpha('fadeHud', 'khhude', 0, 1, 'linear')
        doTweenAlpha('fadeHud', 'scoreTxt', 0, 1, 'linear' )
        doTweenAlpha('fadeHealth', 'healthBar', 0, 1, 'linear')
        doTweenAlpha('fadeHealthIconP1', 'iconP1', 0, 1, 'linear')
        doTweenAlpha('fadeHealthIconP2', 'iconP2', 0, 1, 'linear')
    end
end
