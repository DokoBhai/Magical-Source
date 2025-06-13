local enabled = true

function onCreate()
  --[[ we love multiline comments
  makeLuaText('HpConvertDebug', 'DEBUG STUFF. REMOVE IF FORGOTTEN!', 0, 500, 430)
  addLuaText('HpConvertDebug')
  setObjectCamera('HpConvertDebug', 'hud')
  --]]
  
  local sf = 1.1 --scale factor for most sprites
  local baseX = 1015
  local baseY = downscroll and 10 or 460

  local timeX = downscroll and 487 or 500
  if middlescroll then timeX = 1000 end
  local timeY = downscroll and 635 or 5

  makeLuaSprite("MP", "KH_health/MP_Bar", baseX, baseY) --scale 1: 1020, 470 ||| scale 1.1: 
  makeLuaSprite("HP_BG", "KH_health/HP_BG", baseX-(115*sf), baseY+(29*sf))
  makeLuaSprite("MPHP", "KH_health/MPHP-Text", baseX-(23*sf), baseY+(116*sf))
  baseX = getProperty("HP_BG.x")
  baseY = getProperty("HP_BG.y")
  makeLuaSprite("Player", "KH_health/bf_Icon", baseX+180, baseY+18)
  
  local frames = {}
  for i = 1, 40 do frames[i] = 40-i end
  makeLuaSprite("HP_Bar", "KH_health/HP_Bar_Animated", baseX, baseY)
  loadGraphic("HP_Bar", 'KH_health/HP_Bar_Animated', 319, 172)
  addAnimation("HP_Bar", "Percent", frames, 0)

  makeLuaSprite('Player2', 'KH_health/Sora_Icon', baseX+getProperty('HP_BG.width')*sf, baseY+(downscroll and getProperty('HP_BG.height')+60 or -130))
  setProperty('Player2.x', getProperty('Player2.x')-getProperty('Player2.width')*0.3)
  makeLuaSprite('bonusBar', 'KH_health/Party_member_circle_ui', getProperty('Player2.x')-10, getProperty('Player2.y')-10)
  
  makeLuaSprite('timeBG', "KH_Health/TimeHUD", timeX, timeY)

  for i=0, 3 do
    -- First number: x + 104
    makeLuaSprite("timeNum" ..i , "KH_Health/TimeNumbers", timeX + (i>0 and 116 or 104) + (i*36), timeY+13)
    loadGraphic("timeNum" ..i , "KH_Health/TimeNumbers", 37, 34)
    addAnimation("timeNum" ..i, "count", {0,1,2,3,4,5,6,7,8,9}, 0)
    playAnim("timeNum" ..i, "count")
    --[[if i == 0 then
      setProperty()
    end]]
  end
  
  for _, spr in ipairs({'MP','Player','HP_BG','HP_Bar','MPHP','Player2','bonusBar', 'timeBG', 'timeNum0', 'timeNum1', 'timeNum2'}) do
    setObjectCamera(spr, 'hud')
    scaleObject(spr, sf, sf)
    addLuaSprite(spr, true)
  end
  --exceptions
  scaleObject('Player', .6, .6)
  scaleObject('Player2', .3, .3)
  --screenCenter('bonusBar','xy')

  --[[
  if downscroll then
    setProperty("HP_BG.flipY", true)
    setProperty("HP_Bar.flipY", true)
    setProperty("MP.y", 10)
    setProperty("MPHP.y", getProperty("MPHP.y") - 22)
  end
  ]]
end
function onCreatePost() setState(false) end

function setState(on)
  local timeBarEnabled = getPropertyFromClass("backend.ClientPrefs", "data.timeBarType") ~= "Disabled"

  local ogHUD = {"healthBar", "iconP1", "iconP2", "scoreTxt"}
  local KHHUD = {"MP", "HP_BG", "HP_Bar", "MPHP", "Player", "Player2", "bonusBar"}
  -- \/ Separated for a reason: Time elements work on seperate conditionals
  local ogTime = {"timeBar", "timeTxt"}
  local KHTime = {"timeBG", "timeNum0", "timeNum1", "timeNum2"}

  for _, spr in ipairs(ogHUD) do
    setProperty(spr.. ".visible", not on)
  end
  for _, spr in ipairs(KHHUD) do
    setProperty(spr.. ".visible", on)
  end

  for _, spr in ipairs(ogTime) do
    setProperty(spr.. ".visible", not on and timeBarEnabled)
  end
  -- \/ Find a fix, for if the Time bar ONLY has the song name visible. Currently, just disables the KH song time bar
  timeBarEnabled = timeBarEnabled and getPropertyFromClass("backend.ClientPrefs", "data.timeBarType") ~= "Song Name"
  for _, spr in ipairs(KHTime) do
    setProperty(spr.. ".visible", timeBarEnabled and on)
  end
  --[[setProperty("healthBar.visible", not on)
  setProperty("iconP1.visible", not on)
  setProperty("iconP2.visible", not on)
  setProperty("timeBar.visible", not on)
  setProperty("timeTxt.visible", not on)
  ---
  setProperty("MP.visible", on)
  setProperty("HP_BG.visible", on)
  setProperty("HP_Bar.visible", on)
  setProperty("Player.visible", on)
  setProperty("Player2.visible", on)
  setProperty("MPHP.visible", on)
  enabled = on
  --]]
end

function onUpdate() --onRecalculateRating would be better, but has certain drawbacks such as botplay or health drain mechanics.
  if enabled then
    local hpdisp = math.floor(getHealth()/2*40) --(essentially) scaled to a range of 1-40, then floored.
    setProperty('HP_Bar.animation.curAnim.curFrame', hpdisp-1)

    local timeText = getProperty("timeTxt.text")
    for i=0, 3 do
      local txtSkip = i==0 and 1 or 2
      setProperty("timeNum" ..i.. ".animation.curAnim.curFrame", string.sub(timeText, i+txtSkip, i+txtSkip))
    end
  end
end

function onEvent(n, v1, v2)
  if n == "toggleKH-HUD" then
    if v1 == "" then
      setState(not enabled)
    else
      setState(v1=="on" or v1=="kh")
    end
  elseif n == 'changeKH-Char' then
    loadGraphic('Player', 'KH_health/'..v1..'_Icon')
    loadGraphic('Player2', 'KH_health/'..v2..'_Icon')
  end
end