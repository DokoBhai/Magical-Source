-- Script made by someguywhouhhhh, Modified by me (Hiraeth4558)

-- OG Script https://discord.com/channels/922849922175340586/1231998968481714276

local axes = "XY" -- shake left/right (axes = "X"), shake up/down (axes = "Y"), shake both (axes = "XY")

-- Don't change anything else or I will [Redacted]

local shakeAmount = 0
local shakeSpeed = 0
local startShake = false

function onSongStart()
   for i = 0,getProperty('strumLineNotes.length')-1 do
      setPropertyFromGroup('strumLineNotes', i, 'scrollFactor.x', 1)
      setPropertyFromGroup('strumLineNotes', i, 'scrollFactor.y', 1)
   end

   setProperty('iconP1.scrollFactor.x', 1)
   setProperty('iconP1.scrollFactor.y', 1)
   setProperty('iconP2.scrollFactor.x', 1)
   setProperty('iconP2.scrollFactor.y', 1)

   setProperty('healthBar.scrollFactor.x', 1)
   setProperty('healthBar.scrollFactor.y', 1)
   setProperty('healthBarBG.scrollFactor.x', 1)
   setProperty('healthBarBG.scrollFactor.y', 1)

   setProperty('timeBar.scrollFactor.x', 1)
   setProperty('timeBar.scrollFactor.y', 1)
   setProperty('timeBarBG.scrollFactor.x', 1)
   setProperty('timeBarBG.scrollFactor.y', 1)

   setProperty('timeTxt.scrollFactor.x', 1)
   setProperty('timeTxt.scrollFactor.y', 1)

   setProperty('scoreTxt.scrollFactor.x', 1)
   setProperty('scoreTxt.scrollFactor.y', 1)

   setProperty('botplayTxt.scrollFactor.x', 1)
   setProperty('botplayTxt.scrollFactor.y', 1)
end

function onEvent(name, value1, value2)
   if name == 'Opponent Shakes Screen' and startShake == false and shakeAmount == 0 and shakeSpeed == 0 then
      startShake = true
      shakeAmount = value1
      shakeSpeed = value2
   elseif name == 'Opponent Shakes Screen' and startShake == true and shakeAmount ~= 0 and shakeSpeed ~= 0 then
      shakeAmount = value1
      shakeSpeed = value2
   elseif name == 'Opponent Shakes Screen' and startShake == true and shakeAmount == 0 and shakeSpeed == 0 then
      startShake = false
      shakeAmount = value1
      shakeSpeed = value2
   end
end

function onSpawnNote(i)
   if startShake == true then
      setPropertyFromGroup('notes', i, 'scrollFactor.x', 1)
      setPropertyFromGroup('notes', i, 'scrollFactor.y', 1)
   else
   end
end

local shakeXIntensity = 0
local shakeYIntensity = 0
function opponentNoteHit(i, d, t, isSustainNote)
   if startShake == true then
      local value = shakeAmount * (isSustainNote and 0.65 or 1.0)

      shakeXIntensity = (axes == "X" or axes == "XY") and value or shakeXIntensity
      shakeYIntensity = (axes == "Y" or axes == "XY") and value or shakeYIntensity
   else
   end
end

local time = 0
function onUpdatePost(elapsed)
   if startShake == true then
      time = time + elapsed
      setProperty('camGame.targetOffset.x', math.sin(time * 225.0) * shakeXIntensity)
      setProperty('camHUD.scroll.x', math.cos(time * 225.0) * -shakeXIntensity)
      setProperty('camGame.targetOffset.y', math.cos(time * 225.0) * -shakeYIntensity)
      setProperty('camHUD.scroll.y', math.sin(time * 225.0) * shakeYIntensity)

      shakeXIntensity = math.max(shakeXIntensity - shakeSpeed, 0.0)
      shakeYIntensity = math.max(shakeYIntensity - shakeSpeed, 0.0)
   else
   end
end