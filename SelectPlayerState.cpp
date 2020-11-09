#include <sstream>
#include "SelectPlayerState.h"
#include "DEFENITIONS.h"
#include <iostream>
#include "GameState.h"
#include "MainMenuState.h"

SelectPlayerState::SelectPlayerState(GameDataRef data) : _data(data)
{
    
}

void SelectPlayerState::Init()
{   
    std::cout << _player.speed << std::endl;
    this->_data->assets.LoadTexture("Background", SELECT_PLAYER_BACKGROUND);
    this->_data->assets.LoadTexture("Play Button", MAIN_MENU_PLAY_BUTTON);
    this->_data->assets.LoadTexture("Quit Button", MAIN_MENU_QUIT_BUTTON);
    this->_data->assets.LoadTexture("Randomize Button", SELECT_PLAYER_RANDOMIZE_BUTTON);

    this->_background.setTexture(this->_data->assets.GetTexture("Background"));
    this->_playButton.setTexture(this->_data->assets.GetTexture("Play Button"));
    this->_quitButton.setTexture(this->_data->assets.GetTexture("Quit Button"));
    this->_randomizeButton.setTexture(this->_data->assets.GetTexture("Randomize Button"));

    this->_playButton.setPosition(SCREEN_WIDTH / 4 * 3, SCREEN_HEIGHT - this->_playButton.getTextureRect().height);
    this->_quitButton.setPosition(0, SCREEN_HEIGHT - this->_quitButton.getTextureRect().height);
    this->_randomizeButton.setPosition(SCREEN_WIDTH - this->_randomizeButton.getTextureRect().width, 0);
}

void SelectPlayerState::HandleInput()
{
    sf::Event ev;
    int _speed = 0;
    int _strength = 0;
    int _wits = 0;

    while(this->_data->window.pollEvent(ev))
    {
        if(sf::Event::Closed == ev.type)
        {
            this->_data->window.close();
        }
        
        if(this->_data->input.IsSpriteClicked(this->_playButton, sf::Mouse::Left, this->_data->window))
        {
            std::cout << "On to the game!" << std::endl;
            //this->_data->machine.AddState(StateRef(new GameState(_data)), true);
        }
        if(this->_data->input.IsSpriteClicked(this->_quitButton, sf::Mouse::Left, this->_data->window))
        {
            std::cout << "Back to Main Menu!" << std::endl;
            this->_data->machine.AddState(StateRef(new MainMenuState(_data)), true);
        }
                if(this->_data->input.IsSpriteClicked(this->_randomizeButton, sf::Mouse::Left, this->_data->window))
        {
            std::cout << "Randomizing Player!" << std::endl;
            _speed = 5;
            _strength = 5;
            _wits = 5;
            _player.SetPlayerStats(_speed, _strength, _wits);
        }

    }
}

void SelectPlayerState::Update(float dt)
{

}

void SelectPlayerState::Draw(float dt)
{
    this->_data->window.clear(sf::Color::Black);

    this->_data->window.draw(this->_background);
    this->_data->window.draw(this->_playButton);
    this->_data->window.draw(this->_quitButton);
    this->_data->window.draw(this->_randomizeButton);

    this->_data->window.display();
}