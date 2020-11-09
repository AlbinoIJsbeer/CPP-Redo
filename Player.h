#pragma once

#include "DEFENITIONS.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>

class Player 
{
    public:
        Player();
        ~Player() {}

        void SetPlayerStats(int _speed, int _strength, int _wits);
        void setDefaultStats(Player &_player);

        int strength;
        int speed;
        int wits;

    private:


};
