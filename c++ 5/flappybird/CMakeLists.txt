cmake_minimum_required(VERSION 3.10)
project(flappybird)

find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

set(CMAKE_CXX_STANDARD 17)

add_executable(flappybird
  main.cpp
  Application.cpp
  MenuScreen.cpp
  PlayScreen.cpp
  Bird.cpp
  Pipes.cpp Context.hpp)
target_link_libraries(flappybird sfml-graphics)
