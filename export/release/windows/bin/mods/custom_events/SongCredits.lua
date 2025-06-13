local parts = {"creditBG", "songName", "artist", "artistIcon"}
local partOffset = {0, 130, 130, 20}
local startX = -505
local baseX = -5
local baseY = 200
local startX = -505

function onCreate()
	makeLuaSprite("creditBG", "", startX, baseY)
	makeGraphic("creditBG", 1, 1, "black")
	setProperty("creditBG.alpha", .7)
	setObjectCamera("creditBG", "other")
	addLuaSprite("creditBG")

	makeLuaText("songName", "", 300)
	setTextSize("songName", 25)
	setTextAlignment("songName", "LEFT")
	setProperty("songName.x", startX + partOffset[2])
	setProperty("songName.y", baseY + 25)
	--setTextColor("songName", "red")
	setObjectCamera("songName", "other")
	addLuaText("songName")

	makeLuaText("artist", "", 300)
	setTextSize("artist", 25)
	setTextAlignment("artist", "LEFT")
	setProperty("artist.x", startX + partOffset[3])
	setProperty("artist.y", baseY + 60)
	setTextColor("artist", "gray")
	setObjectCamera("artist", "other")
	addLuaText("artist")

	makeLuaSprite("artistIcon", "", startX + partOffset[4], baseY+15)
	makeGraphic("artistIcon", 100, 100, "red")
	--setProperty("artistIcon.alpha", .7)
	setObjectCamera("artistIcon", "other")
	addLuaSprite("artistIcon")

	--enableDebugText()
end

function enableDebugText()
	makeLuaText("DEBUGTEXT", "THIS_IS_DEBUG", 0, 500, 300)
	setTextSize("DEBUGTEXT", 30)
	setProperty("DEBUGTEXT.x", 500)
	setProperty("DEBUGTEXT.y", 300)
	--setTextColor("artist", "red")
	setObjectCamera("DEBUGTEXT", "other")
	addLuaText("DEBUGTEXT")
end

function onEvent(e, song, artist)
	if(e == "SongCredits") then
		setTextString("songName", "Song: " ..song)
		setProperty("artist.y", getProperty("artist.y") + math.max(0, getProperty("songName.height")-26))
		--setTextString("DEBUGTEXT", getProperty("songName.height"))

		--composerSplit = string.gmatch(artist, '([^%]+)')
		local composers = string.gmatch(artist, "%S+")
		local artistString = "Composers: \n"
		local iconToLoad = ""
		local composerCount = 0
		local uniqueIcon = false

		for name in composers do
			composerCount = composerCount+1
			if (string.find(name, "ICON=") == nil) then
				artistString = artistString.. "" ..name.. "\n"
			else
				uniqueIcon = true
				iconToLoad = string.sub(name, 6, 1000)
			end
		end

		if(composerCount == 2) then
			artistString = "Composer: " ..string.sub(artist, 1, string.find(artist, "ICON")-1)
		else if (composerCount == 1) then
				artistString = "Composer: " ..artist
				iconToLoad = artist 
			end
		end

		loadGraphic("artistIcon", "SongCredits/" ..iconToLoad)
		setTextString("artist", artistString)
		scaleObject("artistIcon", 100/getProperty("artistIcon.width"), 100/getProperty("artistIcon.height"))
		scaleObject("creditBG", 405, math.max(40+getProperty("songName.height")+getProperty("artist.height"), 130))

		for i = 1, 4 do
			doTweenX(parts[i].. "_TWEENIN", parts[i], baseX+partOffset[i], .8, "quartOut")
		end
	end
end

function onTweenCompleted(tag)
	if(tag == "artistIcon_TWEENIN") then
		runTimer("tweenDelay", 3)
		return
	end

	if(tag == "artistIcon_TWEENOUT") then
		--removeLuaSprite("artistIcon", true)
		--removeLuaSprite("creditBG", true)
		--removeLuaText("artist", true)
		--removeLuaText("songName", true)
		--close()
	end
end

function onTimerCompleted(tag)
	if(tag == "tweenDelay") then
		for i = 1, 4 do
			doTweenX(parts[i].. "_TWEENOUT", parts[i], startX+partOffset[i], 1, "quartIn")
		end
	end
end

function onPause()
	--Add stuff later, idk. Show it on the pause menu
	return Function_Continue
end