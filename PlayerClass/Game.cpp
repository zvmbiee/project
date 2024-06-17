#include <cstdlib>
#include "Game.h"
#include <iostream>
#include <conio.h>


Game::Game(): player_(Player{3,3,100,100,10}), map_(&this->player_){}

void Game::Run()
{
	char direction;
	do {
		system("cls");
		this->player_.info();
		this->map_.drow();
		_cputs("Type 'y' when finished typing keys\n");
		std::cout << "Please enter your direction (w,s,a,d,)";
		direction = _getch();
		this->player_.move(direction);
		direction = toupper(direction);
	} while (direction != 'y');
}
