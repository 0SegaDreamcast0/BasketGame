#include <iostream>
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(800, 600), "Game");

	CircleShape shape(30);

	RectangleShape square(Vector2f(80, 80));
	square.setPosition(Vector2f(100, 100));

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
		window.draw(square);
		window.display();
	}

	return 0;
}