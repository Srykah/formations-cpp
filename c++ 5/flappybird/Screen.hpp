#pragma once
#include "Context.hpp"
#include <SFML/Graphics.hpp>

class Screen {
public:
  explicit Screen(Context context)
  : context(context) {}
  virtual ~Screen() = default;

  virtual void handleEvent(sf::Event event) = 0;
  virtual void update(sf::Time delta) = 0;
  virtual void render() = 0;

protected:
  Context context;
};
