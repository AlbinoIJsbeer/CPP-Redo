#include <sstream>
#include "GameState.h"
#include "DEFENITIONS.h"
#include <iostream>

GameState::GameState(GameDataRef data) : _data(data)
{

}

void GameState::Init()
{

}

void GameState::HandleInput()
{
    sf::Event ev;

    while(this->_data->window.pollEvent(ev))
    {
        if(sf::Event::Closed == ev.type)
        {
            this->_data->window.close();
        }
        

    }
}

void GameState::Update(float dt)
{

}

void GameState::Draw(float dt)
{

    this->_data->window.clear(sf::Color(107, 185, 240, 1));



    this->_data->window.display();

}