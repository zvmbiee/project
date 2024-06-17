#include "Map.h"
#include "game_const.h"
#include <iostream>

Map::Map(Player* player): player_(player)
{
	for (int i = 0; i < game_const::height; ++i) {
		for (int j = 0; j < game_const::width; ++j) {
			if (i == 0 || i == (game_const::height - 1) || j == 0 || j == (game_const::width - 1))
				this->map_[i][j] = '#';
			else
				this->map_[i][j] = ' ';
		}
	}
}

void Map::drow()
{
	for (int i = 0; i < game_const::height; ++i) {
		for (int j = 0; j < game_const::width; ++j) {
			if (this->player_->getx() == i && this->player_->gety() == j) {
				std::cout << "P";
			}
			else {
				std::cout << map_[i][j];
			}
		}
		std::cout << std::endl;
	}
}