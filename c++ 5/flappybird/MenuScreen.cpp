#include "MenuScreen.hpp"
#include "CenterOrigin.hpp"
#include "PlayScreen.hpp"

class PlayScreen;

MenuScreen::MenuScreen(Context context)
: Screen(context)
, background(context.textures.get(Textures::Background))
, title("Flappy Bird", context.fonts.get(Fonts::Title), 70) {
  centerOrigin(title);
  title.setPosition(150.f, 100.f);
}

void MenuScreen::handleEvent(sf::Event event) {
  if (event.type == sf::Event::KeyPressed
   && event.key.code == sf::Keyboard::Space) {
    context.nextScreen = std::make_unique<PlayScreen>(context);
  }
}

void MenuScreen::update(sf::Time delta) {}

void MenuScreen::render() {
  context.window.draw(background);
  context.window.draw(title);
}
