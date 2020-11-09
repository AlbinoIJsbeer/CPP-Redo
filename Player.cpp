#include "Player.h"

Player::Player()
{
    strength = 0;
    speed = 0;
    wits = 0;
}

void Player::setDefaultStats(Player &_player)
{

}

void Player::SetPlayerStats(int _speed, int _strength, int _wits)
{
    speed = _speed;
    strength = _strength;
    wits = _wits;
    std::cout << " speed: " + speed << std::endl;
    std::cout << " strength: " + strength << std::endl; 
    std::cout << " wits: " + wits << std::endl;
}