#include <sstream>
#include "MainMenuState.h"
#include "DEFENITIONS.h"
#include <iostream>

MainMenuState::MainMenuState(GameDataRef data) : _data(data)
{

}

void MainMenuState::Init()
{
    this->_data->assets.LoadTexture("Background", MAIN_MENU_BACKGROUND_PATH);
    this->_data->assets.LoadTexture("Play Button", MAIN_MENU_PLAY_BUTTON);
    this->_data->assets.LoadTexture("Title", MAIN_MENIU_TITLE_PATH);

    this->_background.setTexture(this->_data->assets.GetTexture("Background"));
    this->_title.setTexture(this->_data->assets.GetTexture("Title"));
    this->_playButton.setTexture(this->_data->assets.GetTexture("Play Button"));

    this->_title.setPosition(0, SCREEN_HEIGHT / 4);
    this->_playButton.setPosition(SCREEN_WIDTH / 4, (SCREEN_HEIGHT / 4) * 3);
}

void MainMenuState::HandleInput()
{
    sf::Event ev;

    while(this->_data->window.pollEvent(ev))
    {
        if(sf::Event::Closed == ev.type)
        {
            this->_data->window.close();
        }
        
        if(this->_data->input.IsSpriteClicked(this->_playButton, sf::Mouse::Left, this->_data->window))
        {
            std::cout << "On to the game!" << std::endl;
        }
    }
}

void MainMenuState::Update(float dt)
{

}

void MainMenuState::Draw(float dt)
{
    this->_data->window.clear(sf::Color::Black);

    this->_data->window.draw(this->_background);
    this->_data->window.draw(this->_title);
    this->_data->window.draw(this->_playButton);

    this->_data->window.display();
}