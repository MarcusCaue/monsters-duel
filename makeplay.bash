#!/bin/bash

g++ --std=c++17 -o game src/*.cpp src/ASCII_Engine/*.cpp src/ASCII_Engine/Core/*.cpp src/ASCII_Engine/utils/*.cpp src/classes/*.cpp src/fases/*.cpp src/fases/escolhas/*.cpp && ./game
