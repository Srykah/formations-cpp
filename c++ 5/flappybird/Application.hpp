#pragma once
#include "MyWindow.hpp"
#include "ResourceHolder.hpp"
#include "ResourceIdentifiers.hpp"
#include "Screen.hpp"
#include <SFML/Graphics.hpp>
#include <memory>

class Application {
public:
  Application();

  void run();

private:
  MyWindow window;
  std::unique_ptr<Screen> curScreen;
  std::unique_ptr<Screen> nextScreen;
  TextureHolder textures;
  FontHolder fonts;
};
