cmake_minimum_required(VERSION 3.10)
project(hellocircle)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

add_executable(hellocircle main.cpp)

target_link_libraries(hellocircle sfml-graphics)
