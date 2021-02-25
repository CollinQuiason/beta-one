cmake_minimum_required(VERSION 3.17)
project(CPPCCNN)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPPCCNN src/main.cpp src/core/Neuron.cpp src/core/Neuron.h src/core/Network.cpp src/core/Network.h src/core/Layer.cpp src/core/Layer.h)