cmake_minimum_required(VERSION 3.17)
project(traceur_de_rayons)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(traceur_de_rayons
        Utils/Vector3.cpp
        Utils/Vector3.h Ray/Ray.cpp Ray/Ray.h Output/Camera.cpp Output/Camera.h Environment/Environment.cpp Environment/Environment.h Environment/Object.cpp Environment/Object.h Ray/Tessel.cpp Ray/Tessel.h Output/OutputManager.cpp Output/OutputManager.h main.cpp)
