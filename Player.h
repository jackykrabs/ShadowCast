#include "stdafx.h"
#include "Player.h"
#include <SFML/Graphics.hpp>

Player::Player()
{
}

//set the name of the player with the user given string
//Precondition: put in a string
//Postcondition: none
void setName(string)
{

}

//return the position of the player with a float vector
//Precondition: none
//Postcondition: return a float vector
sf::Vector2f Player::getPlayerPosition()
{
	return playerPosition;
}

//set the position of the player with the given float vector
//Precondition: put in a float vector
//Postcondition: none
void Player::setPlayerPosition(sf::Vector2f)
{
	return;
}

//return the name of the player
//Precondition: none
//Postcondition: return a string of the name
string Player::getName()
{
	return name;
}

//set the skin of the player 
//Precondition: put in a sprite
//Postcondition: none
void Player::setSkin(sf::Sprite)
{
	return;
}

//return the skin of the player
//Precondition: none
//Postcondition: return the sprite of the skin
sf::Sprite Player::getSkin()
{
	return skin;
}

//set the high score of the game
//Precondition: put in a double
//Postcondition: none
void Player::setHighScore(double)
{
	return;
}

//get the high score of the game and return it
//Precondition: none
//Postcondition: return the double of the high score
double Player::getHighScore()
{
	return highScore;
}

Player::~Player()
{
}
