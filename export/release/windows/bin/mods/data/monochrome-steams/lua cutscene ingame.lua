cutscene = true -- sets cutscene to true

function onStartCountdown()
    if cutscene == true then -- check if cutscene is set to true, if it is then proceds
        runTimer('bfhey', 4.5) -- runs a timer, tag being "bfhey" reefers to the action bf is about to do

        return Function_Stop -- stops the countdown from happening
    else
        return Function_Continue -- prooceds with the game after cutscene becomes false
    end
end

function onTimerCompleted(tag)
    if tag == 'bfhey' then -- when the timer runs out (the one called "bfhey"), plays bf "hey" anim, sets cutscene to false and prooceds to do the countdown
        cutscene = false -- sets cutscene to false
        stopSound(null)
        startCountdown() -- starts countdown
    end
end
