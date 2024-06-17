#ifndef	PLAYERCLASS_PLAYER_H
#define PLAYERCLASS_PLAYER_H

class Player
{
public:
	Player();
	Player(int x, int y, float health, int damage, int armor);
	Player(const Player& copyFile);
	Player& operator = (const Player& assignFrom);
	void setx(int x);
	int getx() const;
	void sety(int y);
	int gety() const; 
	void sethealth(int health);
	int gethealth() const; 
	void setarmor(int armor);
	int getarmor() const; 
	void setdamage(int damage);
	int getdamage() const;

	void info();
	void move(char);
private:
	int x_;
	int y_;
	float health_;
	int armor_;
	int damage_;

};

#endif