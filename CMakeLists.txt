cmake_minimum_required(VERSION 3.20)
project(Air)

set(CMAKE_CXX_STANDARD 14)

add_library(Air library.cpp static/structure/Node.h private/AirException.h static/structure/Stack.h static/stream/Stream.h)
