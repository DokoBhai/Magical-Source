
function onCreate()
    setProperty('skipCountdown', true) -- Disable the default countdown
end

function onStartCountdown()
    
end

function onVideoComplete()
    startCountdown() -- Start song after video ends
end
function onCreatePost()
    startVideo('oldCountdown')
    setProperty('inCutscene', true)
    return Function_Stop
end