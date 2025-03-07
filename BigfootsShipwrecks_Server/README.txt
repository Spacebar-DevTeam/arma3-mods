Changelog:

8/5/2016 v1.0.0 - initial release


05/01/2021
Modified by ketanna to automatically find map center, 2 additional variables added so players could declare how deep or how shallow 
crates would spawn in the water, the ship icon was changed to show only a blue ship icon

#######

Author:

Bigfoot

#######

Credits:

* Earliest known script variation: Darth_Rogue, Chisel, deadeye, and Robio.
* Based on modified script by Tuna.
* TaylorSwift for very helpful mod template.
* Second_Coming for Occupation mod from which I learned techniques.

#######

Summary:

This addon spawns shipwrecks with loot crates and markers in random water locations on server restart. It does NOT spawn AI at the crates (yet), but you are welcome to add AI.

Inventory can NOT be taken from crates while the crate is underwater, due to Arma mechanics. Use R3F, Igiload, or built-in Exile crate mounting to load crates onto SDVs to be transported to shore.

Feel free to extend this however you like. I encourage you to post your edits on http://www.exilemod.com/ so others can enjoy your improvements and contribute with further enhancements.

Most settings can be configured to your preference in config.sqf.

########

Features:

* Configurable crate loot, with loot spawn percentages, guaranteed items, additional random items, random poptab count, and random classname selection for loot items.
* Spawns up to a certain configurable number of shipwrecks in the ocean, at a configurable distance from a configurable center point.
* Displays marker on shipwreck.
* Players within a configurable distance of the shipwreck will cause the marker to disappear and an Exile Toast as well as chat message to be displayed to all players with the shipwreck's/player's coordinates. This can be turned on or off.

########

Roadmap:
* Add optional AI spawns around crates.
* Allow shipwrecks to cluster in certain areas - e.g 1/3 of ships would spawn in Altis central bay, and 1/3 of shipwrecks would spawn in deep water surrounding altis.
* Increased chance for certain loot

########

License:

This work is license under the Arma Public License Share Alike (APL-SA). Full license text can be found in the LICENSE.txt file in this package.

Essentially, you must not charge for, or to use, this addon. If you make modifications to this addon, it can only be distributed with APL-SA. This is so others in the Exile Mod community can benefit from collaborative efforts.

########

Installation:

Drop the BigfootsShipwrecks_Server.pbo file in your @ExileServer/addons/ folder.

########

Configuration:

Edit values in config.sqf to your liking.