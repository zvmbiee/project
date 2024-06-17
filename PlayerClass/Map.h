#ifndef PLAYERCLASS_MAP_H
#define PLAYERCLASS_MAP_H

#include "game_const.h"
#include "Player.h"
class Map
{
private:
	char map_[game_const::height][game_const::width];
	Player* player_;
public:
	Map(Player* player);
	void drow();
};

#endif