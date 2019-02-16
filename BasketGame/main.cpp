#include <iostream>
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(800, 600), "Game");

	while (window.isOpen())
	{
		Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
				window.close();
			default:
				break;
			}
		}


		window.clear();

		window.display();
	}

	return 0;
}