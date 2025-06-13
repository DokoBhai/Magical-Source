function onEvent(eventName, value1)
    if eventName == "HideKH" then
        if value1 == 1 then
            debugPrint("HideKH event triggered with value: " .. value1)
            setProperty("Player2.visible", false)
            setProperty("bonusBar.visible", false)
        else
            debugPrint("HideKh event triggered with value: ")
            setProperty("Player2.visible", true)
            setProperty("bonusBar.visible", true)
        end
    end
end