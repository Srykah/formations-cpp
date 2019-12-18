#include "Application.hpp"
#include "Screen.hpp"

const sf::Time TIME_BETWEEN_UPDATES = sf::seconds(1.f/60.f);

Application::Application() {
  textures.loadFromFile(Textures::Background, "Media/Background.png");
  textures.loadFromFile(Textures::Bird, "Media/Bird.png");
  textures.loadFromFile(Textures::Pipe, "Media/Pipe.png");
  fonts.loadFromFile(Fonts::Score, "Media/Arial.ttf");
  fonts.loadFromFile(Fonts::Title, "Media/Impact.ttf");
}

void Application::run() {
  sf::Clock clock;
  sf::Time timeSinceLastUpdate = sf::Time::Zero;

  while (window.isOpen()) {

    if (nextScreen) {
      curScreen = std::move(nextScreen);
    }

    sf::Event event;
    while (window.pollEvent(event)) {
      curScreen->handleEvent(event);
    }

    timeSinceLastUpdate += clock.restart();
    while (timeSinceLastUpdate >= TIME_BETWEEN_UPDATES) {
      curScreen->update(timeSinceLastUpdate);
      timeSinceLastUpdate -= TIME_BETWEEN_UPDATES;
    }

    curScreen->render();
  }
}
