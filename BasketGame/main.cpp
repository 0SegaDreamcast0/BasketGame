#include <iostream>
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(800, 600), "Game");

	CircleShape shape(30);



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
		window.draw(shape);
		window.display();
	}

	return 0;
}