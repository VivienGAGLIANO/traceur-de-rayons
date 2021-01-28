//
// Created by vivien on 27/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_ENVIRONMENT_H
#define TRACEUR_DE_RAYONS_ENVIRONMENT_H


#include <string>
#include <list>
#include "Output/Camera.h"
#include "Environment/Objects/Object.h"

class Environment {

private:
    std::string name;
    Camera camera;
    std::list<Object*> objects;

public:
    explicit Environment(std::string name = "Default", const Camera &camera = Camera());
    Environment(const Environment &);
    std::list<Tessel> getTessels();
};


#endif //TRACEUR_DE_RAYONS_ENVIRONMENT_H
