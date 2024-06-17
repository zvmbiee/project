#ifndef PLAYERCLASS_GAME_H
#define PLAYERCLASS_GAME_H
#include "Player.h"
#include "Map.h"
class Game
{
private:
	Player player_;
	Map map_;
public:
	Game();
	void Run();
};
#endif