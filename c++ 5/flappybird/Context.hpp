#pragma once
#include "ResourceIdentifiers.hpp"
#include "ResourceHolder.hpp"
#include "MyWindow.hpp"
#include <SFMl/Graphics.hpp>
#include <memory>

class Screen;

struct Context {
  MyWindow& window;
  std::unique_ptr<Screen>& nextScreen;
  ResourceHolder<Textures::ID, sf::Texture>& textures;
  ResourceHolder<Fonts::ID, sf::Font>& fonts;
};
