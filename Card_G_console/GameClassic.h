#pragma once
#include "Game.h"
#include "UserPlayer.h"
#include "VirtualPlayer.h"

class GameClassic :
	public Game
{
	Player player;
	VirtualPlayer opponent;
};

