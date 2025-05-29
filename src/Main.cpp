#include <windows.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

#include "AutPI.h"
#include "mod_loader.h"
#include "cave_story.h"
#include "macros.h"
#include "lua/Lua.h"

void PlayerTouchGroundExample()
{
	// I used 2 "macros" for this if statement. The actual code would be "if ((gMC.flag & 8) && (g_GameFlags & 2))"
	if (PLAYER_TOUCHING_GROUND && PLAYER_HAS_INPUT)
		AddExpMyChar(1); // every frame the player is touching the ground, the game will gain 1 experience point.
}

void InitMod(void)
{
	LoadAutPiDll(); // we need to load autpi.dll first before anything
	RegisterLuaFuncElement(SetModLua); // set up custom lua code if you like that kind of thing
	
	RegisterActionElement(PlayerTouchGroundExample); // Register our custom code function as an "Action" element. "Action" elements are usually code like running the player code, the collision code, etc.
}
