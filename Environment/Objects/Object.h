//
// Created by vivien on 27/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_OBJECT_H
#define TRACEUR_DE_RAYONS_OBJECT_H

#include <list>
#include "Utils/Vector3.h"
#include "Ray/Tessel.h"

class Tessel;

class Object {

protected:
    Vector3 position;
    Vector3 rotation;
    double scale = 1.;
    std::list<Tessel> tessels{};
    virtual void tesselate() = 0;

public:
    explicit Object(const Vector3 &position = Vector3(), const Vector3 &rotation = Vector3(), double scale = 1);
    Object(const Object &);

    std::list<Tessel> getTessels();
};


#endif //TRACEUR_DE_RAYONS_OBJECT_H
