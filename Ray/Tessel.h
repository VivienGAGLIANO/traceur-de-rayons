//
// Created by vivien on 27/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_TESSEL_H
#define TRACEUR_DE_RAYONS_TESSEL_H

#include "Environment/Objects/Object.h"
#include "Utils/Vector3.h"

class Object;

class Tessel {

private:
    Vector3 v0, v1, v2;
    Object *owner;

public:
    Tessel(const Vector3 &, const Vector3 &, const Vector3 &, Object *);
    Tessel(const Tessel &);
    Vector3 getNormal();
    Vector3 getVertex(int);
    Vector3 getBarycenter();
};


#endif //TRACEUR_DE_RAYONS_TESSEL_H
