#include "Player.h"
#include "game_const.h"
#include "Game.h"
#include <iostream>

Player::Player(): x_(0), y_(0),health_(0),damage_(0),armor_(0)
{
}

Player::Player(int x, int y, float health, int damage, int armor)
	:x_(x),y_(y),health_(health),damage_(damage),armor_(armor)
{
}

Player::Player(const Player& copy)
{
	std::cout << "Player was created by copy constructor " << this << " from " << &copy << std::endl;
	this->x_ = copy.getx();
	this->y_ = copy.gety();
	this->health_ = copy.gethealth();
	this->damage_ = copy.getdamage();
	this->armor_ = copy.getarmor();
}

Player& Player::operator=(const Player& assignFrom)
{
	std::cout << "Player assigned " << this << " from " << &assignFrom << std::endl;
	this->x_ = assignFrom.getx();
	this->y_ = assignFrom.gety();
	this->health_ = assignFrom.gethealth();
	this->damage_ = assignFrom.getdamage();
	this->armor_ = assignFrom.getarmor();
	return *this;
}

void Player::setx(int x)
{
	this->x_ = x;
}

int Player::getx() const
{
	return this->x_;
}

void Player::sety(int y)
{
	this->y_ = y;
}

int Player::gety() const
{
	return this->y_;
}

void Player::sethealth(int health)
{
	this->health_ = health;
}

int Player::gethealth() const
{
	return this->health_;
}

void Player::setarmor(int armor)
{
	this->armor_ = armor;
}

int Player::getarmor() const
{
	return this->armor_;
}

void Player::setdamage(int damage)
{
	this->damage_ = damage;
}

int Player::getdamage() const
{
	return this->damage_;
}

void Player::info()
{
	std::cout << "************* info about " << this << " ***************" << std::endl;
	std::cout << "position x: " << this->x_ << std::endl;
	std::cout << "position y: " << this->y_ << std::endl;
	std::cout << "health: " << this->health_ << std::endl;
	std::cout << "armor: " << this->armor_ << std::endl;
	std::cout << "damege: " << this->damage_ << std::endl;
}



void Player::move(char keyPressed)
{
	if (keyPressed == 'w' && this->x_ > 1) {
		this->x_--;
	}
	else if (keyPressed == 's' && this->x_ < (game_const::height - 2)) {
		this->x_++;
	}
	else if (keyPressed == 'a' && this->y_ > 1) {
		this->y_--;
	}
	else if (keyPressed == 'd' && this->y_ < (game_const::width - 2)) {          
		this->y_++;
	}
	
}