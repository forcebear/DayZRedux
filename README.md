![DayZRedux Logo](http://forums.dayzredux.com/public/style_images/mystic/logo.png)        
A variant of DayZ Mod intended to be more brutal and unforgiving.

Changelog
---------

***** Most changes from 1.7.6.1 are in the update without notice, since the code was updated to 1.7.6.1 *****

- [Change] All skins now have a bandit and survivor variant, excluding bait runner.
- [Change] Zombies are ridiculous.
- [Change] The M24 is now the M40A3.
- [Change] Main rotor parts chance reduced.
- [Change] Debug warning if you are less than 500M away from debug, skull and crossbones icon.
- [Change] Helicopter wrecks will spawn at random intervals, not immediately.
- [Change] Added randomized (max of 10) number of wrecks per restart.
- [Change] Players in moving closed vehicles > 10 KPH cannot be hurt by zombies
- [Change] Since zombies can hit helicopters when they are not even close, or an object/wall is in the way, players cannot be hurt by zeds in helicopters.

------

- [Fix] You may now eat and drink in vehicles
- [Fix] Duplication by "take" action to pick up objects
- [Fix] Ammo refill on relog.
- [Fix] Other duplication methods.

------

- [new] Simple benefits of clothing, I.e. insulation, waterproofing, wind resistance etc.
- [New] SA58V-Acog
- [New] SA58V-CCO
- [New] SA58P
- [New] Criminal (uniform), police (uniform) and bait runner skins.
- [New] You cannot eat or drink uncooked food or water while infected.
- [New] Hive extension instead of Bliss, mainly since bliss is no longer updated by its developer.
- [New] Server admins may use the Hive extension to change time settings on their server, link multiple servers etc.

------

- [Removed] New and host server buttons.

------

Notable 1.7.6.1 changes implemented
- [Vanilla] Added new backpack variants
- [Vanilla] Combat roll
- [Vanilla] Updated UI
- [Vanilla] Shake and cough when infected.
- [Vanilla] Zombie changes
- [Vanilla] Machete added
- [Vanilla] Wild zombie spawns
- [Vanilla] Melee weapon ammo reload fix
- [Vanilla] Loot models, i.e. compass is a compass not a bag in a loot pile anymore. 

- [Note] The loot table/chances has not been changed aside from the above changes.

Prerequisites
-------------

 - Windows 7 or Windows Server 2008
 - ArmA 2 Combined Operations Dedicated Server (Steam users must merge ArmA2 and ArmA2 OA Directories)
 - Latest ArmA 2 Operation Arrowhead Beta Patch (http://www.arma2.com/beta-patch.php)
 - Microsoft Visual C++ 2010 SP1 x86 Redistributable (http://www.microsoft.com/en-us/download/details.aspx?id=8328)
 - Strawberry Perl (http://www.strawberryperl.com/
 - MySQL Community Server (http://www.mysql.com/downloads/mysql/)

Known Bugs
----------
 - Sometimes a combat logger does not leave a body behind.  If you can replicate this reliably, please let me know the steps to do so.  Note that, regardless, the combat logger is always killed properly in the database.

Credits
-------
 - Bohemia Interactive Simulations :: for ArmA2 and the obvious contributions/support to Rocket and DayZ
 - Dean "Rocket" Hall :: for DayZ itself and being supportive of community froked variants of DayZ
 - ayan4m1 :: DayZRedux was based upon an early Bliss build and continues to use a Bliss hive library https://github.com/ayan4m1/DayZ-Private 
 - Support of this extension has dropped in redux, use the modified hive extension now. The hive extension contains code from the bliss hive for functions such as playersync, combat log, etc.
 - Bliss contributors :: by extension, some of the code was originally submit to the Bliss repo by others.  Refer to ayan4m1's repo for full change logs and authorship.
 - Alexander :: Responsible for contributing to various design decisions, creating all of the custom artwork, virtually all of the custom building/locations, and more.
 - dut :: Responsible for some of the 3DStudio MAX models we converted to ArmA2 models for some items (Changelog for details)
 - AlexanderG :: Responsible for some of the 3DStudio MAX models we converted to ArmA2 models for some items (Changelog for details)
 - Stapo :: Inspiring the creation of a back-end construction system that was implemented to DayZRedux
 - Rajkosto https://github.com/rajkosto/hive As of update 1.1.0 DayZ Redux has switched to using the official Hive extension.

Installation Instructions
-------------------------
[Server] (http://forums.dayzredux.com/index.php?/topic/3187-dayzredux-server-pack-download-setup/)


[Client] (http://forums.dayzredux.com/index.php?/topic/40-dayz-redux-installation-and-troubleshooting/)

License
-------
The terms of use/license below pertains to all code, artwork, and other assets that have
been created/developed for DayZ Redux.  In short, all assets which are explicit to DayZ
Redux itself and otherwise not withstanding a prior author/owner (e.g. Bohemia
Interactive, Dean "Rocket" Hall, etc.).

Henceforth, mention of 'DayZ Redux' covers only the aforementioned assets in their entirety.

Accessing and/or using 'DayZ Redux' assets requires agreement with the following terms
of use/license:

1) 'DayZ Redux' assets MAY be modified and/or included in other mods in whole or part as long as all proper credit
is cited to "DayZRedux" in relevant "Change Log", "Feature List", and other such material, including a link back to
http://www.dayzredux.com and https://github.com/Venthos/DayZRedux

2) If you create and distribute a work based on the DayZ Redux assets, you must license the entire work, as a whole,
under this License to anyone who will be using it. This License gives no permission to license the work in any other
way, but it does not invalidate such permission if you have separately received it.

3) You may not utilize DayZ Redux assets for any commercial purposes whatsoever without prior permission from their explicit
relevant author(s).  Contact the repo maintaner (Venthos) if you are unsure who maintains authorship over a given DayZRedux asset.

Repo Maintainer
---------------
Venthos    
Email: venthos@dayzredux.com
