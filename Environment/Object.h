//
// Created by vivien on 27/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_OBJECT_H
#define TRACEUR_DE_RAYONS_OBJECT_H

#include "Utils/Vector3.h"
#include "Ray/Tessel.h"
#include <list>

class Object {

protected:
    Vector3 position;
    Vector3 rotation;
    double scale = 1.;

public:
    Object();
    explicit Object(const Vector3 &);
    Object(const Vector3 &, double);
    Object(Vector3, Vector3, double);
    Object(const Object &);
    virtual std::list<Tessel> getTessel() = 0;
};


#endif //TRACEUR_DE_RAYONS_OBJECT_H
