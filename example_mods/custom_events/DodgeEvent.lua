function onCreate()
    --variables
    Dodged = false;
    canDodge = false;
    DodgeTime = 0;
    
    precacheImage('spacebar');
    precacheSound('DODGE');
    precacheSound('Dodged');
end

function onEvent(name, value1, value2)
    if name == "DodgeEvent" and not canDodge then
        --Get Dodge time, fallback to 1 second if invalid
        DodgeTime = tonumber(value1)
        if DodgeTime == nil or DodgeTime <= 0 then
            DodgeTime = 1
        end
        
        --Make Dodge Sprite
        makeAnimatedLuaSprite('spacebar', 'spacebar', 400, 200);
        addAnimationByPrefix('spacebar', 'spacebar', 'spacebar', 25, true);
        objectPlayAnimation('spacebar', 'spacebar', true);
        setObjectCamera('spacebar', 'other');
        scaleObject('spacebar', 0.50, 0.50); 
        addLuaSprite('spacebar', true); 
        
        --Set values so you can dodge
        playSound('DODGE');
        canDodge = true;
        Dodged = false;
        runTimer('Died', DodgeTime);
        debugPrint('DodgeEvent started, DodgeTime: '..DodgeTime)
    end
end

function onUpdate()
    if canDodge == true and getPropertyFromClass('flixel.FlxG', 'keys.justPressed.SPACE') then
        Dodged = true;
        playSound('Dodged', 0.7);
        characterPlayAnim('boyfriend', 'dodge', true);
        setProperty('boyfriend.specialAnim', true);
        removeLuaSprite('spacebar', true);
        canDodge = false;
        debugPrint('Dodge successful!');
    end
end

function onTimerCompleted(tag, loops, loopsLeft)
    if tag == 'Died' and canDodge then
        if Dodged == false then
            setProperty('health', 0);
            removeLuaSprite('spacebar', true);
            debugPrint('Dodge failed, player killed.');
        else
            debugPrint('Dodge timer ended, player survived.');
        end
        canDodge = false;
        Dodged = false;
    end
end