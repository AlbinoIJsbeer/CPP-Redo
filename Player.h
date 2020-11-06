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

        void RandomizePlayer(Player &_player);
        void setDefaultStats(Player &_player);

        int strength = 1;
        int speed = 1;
        int wits = 1;

    private:


};
