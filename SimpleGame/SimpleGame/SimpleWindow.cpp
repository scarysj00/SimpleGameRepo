#include <iostream>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace sf;
using namespace std;

void SimpleWindow()
{
	// ������ â ����
	RenderWindow Window(VideoMode(1024, 768), "SimpleGame", Style::Titlebar | Style::Close);

	Event e;

	while(Window.isOpen()) // Window Open ���� Ȯ�� => true
	{
		// Close ��ư�� Ŭ�� Event ���� => Window Close
		while(Window.pollEvent(e)) // Event ����
		{
		   // Event type ����
			switch (e.type)
			{
			case Event::Closed: // Window close ��ư Ŭ�� �̺�Ʈ ����
				Window.close(); 
				break;
		    }
		}
	}
}
