cmake_minimum_required(VERSION 3.20)
project(Air)

set(CMAKE_CXX_STANDARD 14)

add_library(Air library.cpp static/structure/Trie.h static/structure/Node.h static/structure/Trie.cpp static/stream/Stream.h private/AirException.h)
