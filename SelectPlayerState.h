#pragma once

#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"
#include "InputManager.h"
#include "Player.h"

class SelectPlayerState : public State
{
    public:
        SelectPlayerState(GameDataRef data);

        void Init();

        void HandleInput();
        void Update(float dt);
        void Draw(float dt);
    private:
        Player _player = Player();
        GameDataRef _data;
        sf::Sprite _background;
        sf::Sprite _playButton;
        sf::Sprite _quitButton;
        sf::Sprite _randomizeButton;

};