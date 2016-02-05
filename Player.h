#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

using namespace std;
class Player
{
public:
	Player();
	void setName(string);
	sf::Vector2f getPlayerPosition();
	void setPlayerPosition(sf::Vector2f);
	string getName();
	void setSkin(sf::Sprite);
	sf::Sprite getSkin();
	void setHighScore(double);
	double getHighScore();
	~Player();

private:
	sf::Sprite skin;
	string name;
	double highScore;
	sf::Vector2f playerPosition;
	double speed;
};

