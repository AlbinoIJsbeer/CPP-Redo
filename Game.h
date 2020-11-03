#pragma once

#include <SFML/Graphics.hpp>
#include <memory>
#include <string>
#include "AssetManager.h"
#include "InputManager.h"
#include "StateMachine.h"

struct GameData
{
    StateMachine machine;
    sf::RenderWindow window;
    AssetManager assets;
    InputManager input;
};

typedef std::shared_ptr<GameData> GameDataRef;

class Game
{
    private:
        const float dt = 1.0f / 60.0f;
        sf::Clock _clock;
        GameDataRef _data = std::make_shared<GameData>();

        void Run();

    public:
        Game(int widht, int height, std::string title);

};
