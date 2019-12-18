#include <SFML/Graphics.hpp>

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "Hello, Circle !");
  sf::CircleShape circle(30.f);
  circle.setOrigin(30.f, 30.f);
  circle.setPosition(400.f, 300.f);
  circle.setFillColor(sf::Color::Green);
  while (window.isOpen()) {
    sf::Event event;
    window.waitEvent(event);
    if (event.type == sf::Event::Closed) {
      window.close();
    }
    window.clear();
    window.draw(circle);
    window.display();
  }
  return 0;
}
