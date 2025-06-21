

function onCreatePost()
    for i = 0, getProperty('unspawnNotes.length')-1 do
       
        if getPropertyFromGroup('unspawnNotes', i, 'noteType') == 'laserNote' then
            setPropertyFromGroup('unspawnNotes', i, 'noteSplashData.texture', 'laserNoteSplash')
            setPropertyFromGroup('unspawnNotes', i, 'texture', 'laserNote')
        end
    end
end

function noteMiss(id, direction, noteType, isSustainNote)
    if noteType == 'laserNote' then
        setProperty('boyfriend.specialAnim',true)
        playAnim('boyfriend', 'hurt', true)
        -- Take 40% health on miss1
        setProperty('health', getProperty('health') * 0.1)
    end
end


function goodNoteHit(id, direction, noteType, isSustainNote)
    if noteType == 'laserNote' then
        setProperty('health', getProperty('health' )+ 0.2)
        playSound('DODGE', 1)
        playAnim('boyfriend', 'dodge', true)
        setProperty('boyfriend.specialAnim', true) -- Prevents other animations from interrupting
        setPropertyFromGroup('playerStrums', direction, 'color', getColorFromHex('00FF00'))
        for i = 1, getProperty('grpNoteSplashes.length') do
            setPropertyFromGroup('grpNoteSplashes', i, 'rgb.r.value', {0, 1, 0})
            setPropertyFromGroup('grpNoteSplashes', i, 'rgb.g.value', {0, 1, 0})
            setPropertyFromGroup('grpNoteSplashes', i, 'rgb.b.value', {0, 1, 0})
        end
        runTimer('revertStrumColor_'..direction, 0.15)
        runTimer('endDodgeAnim', 2)
    end
end

function onTimerCompleted(tag)
    if tag:sub(1, 17) == 'revertStrumColor_' then
        local dir = tonumber(tag:sub(18))
        setPropertyFromGroup('playerStrums', dir, 'color', getColorFromHex('FFFFFF')) -- revert to white
    elseif tag == 'endDodgeAnim' then
        setProperty('boyfriend.specialAnim', false)
    end
end