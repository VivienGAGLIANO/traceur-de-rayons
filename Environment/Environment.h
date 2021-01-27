//
// Created by vivien on 27/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_ENVIRONMENT_H
#define TRACEUR_DE_RAYONS_ENVIRONMENT_H


#include "Output/Camera.h"
#include <string>
#include <list>
#include "Object.h"

class Environment {

private:
    std::string name;
    Camera camera;
    std::list<Object> objects;

public:
    Environment();
    explicit Environment(std::string);
    explicit Environment(const Camera &);
    Environment(std::string, const Camera &);
    Environment(const Environment &);
};


#endif //TRACEUR_DE_RAYONS_ENVIRONMENT_H
