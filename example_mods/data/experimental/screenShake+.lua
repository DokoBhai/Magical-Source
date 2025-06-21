function onCreate()
    runTimer('startShake', 71)
end

function startRandomShake()
    local delay = math.random(3, 5)
    runTimer('screenShake', delay)
end

function characterExists(tag)
    return getProperty(tag .. '.animation') ~= nil
end

function onTimerCompleted(tag, loops, loopsLeft)
    if tag == 'startShake' or tag == 'screenShake' then
        cameraShake('game', 0.03, 0.5)
        playSound('meteor', 1)

        -- Scare animations
        if getProperty('boyfriend.animation.curAnim.name') ~= 'scared' then
            playAnim('boyfriend', 'hurt', true)
        end
        if characterExists('speakerless') and getProperty('speakerless.animation.curAnim.name') ~= 'scared' then
            playAnim('speakerless', 'scared', true)
        end

        startRandomShake()
    end
end


