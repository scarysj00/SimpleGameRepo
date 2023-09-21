#include "Game.h"

void Game::InitVariable()
{
	// nullptr : 주소값이 없는 상태 -> 아무것도 가리키지 않는 상태
    this->Window = nullptr;
}

void Game::InitWindow()
{
	this->VMode.width = 1024;
	this->VMode.height = 768;

	this->Window = new sf::RenderWindow(this->VMode, "Simple Game", sf::Style::Titlebar | sf::Style::Close);
}

Game::Game()
{
	this->InitVariable();
	this->InitWindow(); 
}

Game::~Game()
{
}


const bool Game::IsCreate()
{
	return this->Window->isOpen();
}

void Game::ExecEvent()
{
    while (Window.pollEvent(Event))
    {
        switch (Event.type)
        {
        case sf::Event::Closed:
            Window.close();
            break;
        case sf::Event::KeyPressed:
            if (Event.key.code == sf::Keyboard::Escape)
            {
                Window.close();                                                                                                                                                                               
            }
    }
}

void Game::Update()
{
}

void Game::Render()
{
}
