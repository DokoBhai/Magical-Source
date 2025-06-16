function onEvent(name, value1, value2)
    if name == 'HideHud' then
        if value1 == 'hide' then
            doTweenAlpha('hudFadeOut', 'camHUD', 0, 1, 'linear')
        elseif value1 == 'show' then
            doTweenAlpha('hudFadeIn', 'camHUD', 1, 1, 'linear')
        end
    end
end
