local forceCenter = false
local forceGF = false

debugPrint('Script loaded!')

function onEvent(name, value1, value2)
    if name == 'cameraCenter' then
        forceCenter = true
        setProperty('isCameraOnForcedPos', true)
        setProperty('camFollow.x', 640)
        setProperty('camFollow.y', 360)
        debugPrint('cameraCenter event triggered: Forcing camera to (640, 360)')
    elseif name == 'cameraUncenter' then
        forceCenter = false
        setProperty('isCameraOnForcedPos', false)
        setProperty('defaultCamZoom', 1) -- Reset zoom
        debugPrint('cameraUncenter event triggered: Camera follow reset and zoom restored')
    elseif name == 'cameraGF' then
        debugPrint('cameraGF event received!')
        local gfX = getProperty('gf.x') + getProperty('gf.cameraPosition[0]')
        local gfY = getProperty('gf.y') + getProperty('gf.cameraPosition[1]')
        triggerEvent('Camera Follow Pos', tostring(gfX), tostring(gfY))
        setProperty('defaultCamZoom', 0.8)
        debugPrint('cameraGF event: Camera moved to GF POV ('..tostring(gfX)..','..tostring(gfY)..') and zoomed out')
    end
end

function onUpdate(elapsed)
    if forceCenter then
        setProperty('camFollow.x', 640)
        setProperty('camFollow.y', 360)
        debugPrint('onUpdate: camFollow.x = '..tostring(getProperty('camFollow.x'))..', camFollow.y = '..tostring(getProperty('camFollow.y')))
    elseif forceGF then
        local gfX = getProperty('gf.x') + getProperty('gf.cameraPosition[0]')
        local gfY = getProperty('gf.y') + getProperty('gf.cameraPosition[1]')
        setProperty('camFollow.x', gfX)
        setProperty('camFollow.y', gfY)
    end
end