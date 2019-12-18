#pragma once
#include <SFML/Graphics.hpp>

namespace Textures {
enum ID {
  Background,
  Bird,
  Pipe
};
}

namespace Fonts {
enum ID {
  Score,
  Title
};
}

template <typename Id, class Res> class ResourceHolder;
using TextureHolder = ResourceHolder<Textures::ID, sf::Texture>;
using FontHolder = ResourceHolder<Fonts::ID, sf::Font>;
