#pragma once

#include <Windows.h>

#include "cave_story.h"

// Player Collision
#define PLAYER_TOUCHING_LEFT_WALL (gMC.flag & 1)
#define PLAYER_TOUCHING_CEILING (gMC.flag & 2)
#define PLAYER_TOUCHING_GROUND (gMC.flag & 8)
#define PLAYER_TOUCHING_RIGHT_WALL (gMC.flag & 4)

#define PLAYER_HAS_INPUT (g_GameFlags & 2) // Player can have input
#define CREDITS_ARE_ACTIVE (g_GameFlags & 8)

#define TscFlag(n) (GetNPCFlag(n))

constexpr RECT RC_XYWH(int x, int y, int width, int height) {
    return { x, y, x + width, y + height };
}