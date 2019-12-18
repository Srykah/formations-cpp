#pragma once
#include "Screen.hpp"

class MenuScreen : public Screen {
public:
  explicit MenuScreen(Context context);
  ~MenuScreen() override = default;

  void handleEvent(sf::Event event) override;
  void update(sf::Time delta) override;
  void render() override;

private:
  sf::Sprite background;
  sf::Text title;
};
