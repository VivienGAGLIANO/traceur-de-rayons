//
// Created by vivien on 27/01/2021.
//
#include "Environment/Environment.h"
#include "Output/OutputManager.h"
#include "Environment/Objects/Cube.h"
#include "Utils/Vector3.h"

int main()
{
    Environment env{};
    Cube *cube = new Cube(Vector3(0, 0, 0), Vector3(0, 0, 0), 1);
    env.addObject(cube);
    OutputManager outputManager{};

    outputManager.renderScene(env);
    return 0;
}