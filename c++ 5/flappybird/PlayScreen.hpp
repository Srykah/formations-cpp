#pragma once
#include "Screen.hpp"
#include "Bird.hpp"
#include "Pipes.hpp"

class PlayScreen : public Screen {
public:
  explicit PlayScreen(Context context);
  ~PlayScreen() override = default;

  void handleEvent(sf::Event event) override;
  void update(sf::Time delta) override;
  void render() override;

private:
  sf::Sprite background;
  sf::Text score;
  Bird bird;
  Pipes pipes;
};
