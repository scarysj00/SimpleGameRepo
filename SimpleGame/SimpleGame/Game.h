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
	// �����ͷ� �����ϴ� ������ â�� ���� ���� �����Ű�� ���ؼ�
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

