#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include "SimpleGame.h"

class Game
{
private:

	// Window
	sf::RenderWindow* Window;
	// 포인터로 선언하는 이유는 창의 개폐를 쉽게 실행시키기 위해서
	sf::VideoMode VMode;

	// Event
	sf::Event Event;

	void InitVariable();
	void InitWindow();

public:
	// constructor
	Game();

	// destructor
	~Game();

    // function
	const bool IsCreate();



	void Update();

	void Render();

};

