#include <SFML/Graphics.hpp>

const int Window_Size_X = 800;
const int Window_Size_Y = 900;

int main()
{
    sf::RenderWindow window(sf::VideoMode({ Window_Size_X, Window_Size_Y }), "ITS TETRIS!");

    // Window Background
    sf::RectangleShape background({Window_Size_X,Window_Size_Y});
    background.setFillColor(sf::Color{ 0, 0, 240 });

	// Gameboard Background
    sf::RectangleShape gameoard_background({ Window_Size_X / 2, Window_Size_Y });
    gameoard_background.setFillColor(sf::Color{ 174, 180, 255 });

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
                window.close();

        }



        window.clear();
        window.draw(background);
        window.draw(gameoard_background);
        window.display();
    }
}