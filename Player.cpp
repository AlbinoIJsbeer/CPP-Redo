#include "Player.h"

Player::Player()
{

}

void Player::setDefaultStats(Player &_player)
{
    _player.speed = 1;
    _player.strength = 1;
    _player.wits = 1;
}

void Player::RandomizePlayer(Player &_player)
{
    // _player.speed = rand()%(MAX_PLAYER_SPEED-1 + 1) + 1;
    // _player.strength = rand()%(MAX_PLAYER_STRENGTH-1 + 1) + 1;
    // _player.wits = rand()%(MAX_PLAYER_WITS-1 + 1) + 1;
    std::cout << " speed: " + _player.speed << std::endl;
    std::cout << " strength: " + _player.strength << std::endl; 
    std::cout << " wits: " + _player.wits << std::endl;
}