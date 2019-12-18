#pragma once
#include <SFML/Graphics/RenderWindow.hpp>

class MyWindow : public sf::RenderWindow {
public:
  MyWindow() : RenderWindow(sf::VideoMode(300, 400), "Flappy Bird !") {}
};
