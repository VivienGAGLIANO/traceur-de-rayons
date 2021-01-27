//
// Created by vivien on 27/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_OBJECT_H
#define TRACEUR_DE_RAYONS_OBJECT_H

#include "Utils/Vector3.h"
#include "Ray/Tessel.h"
#include <list>

class Object {
public:
    virtual std::list<Tessel> getTessel() = 0;

protected:
    Vector3 position;
    Vector3 rotation;
    double scale = 1.;

private:
};


#endif //TRACEUR_DE_RAYONS_OBJECT_H
