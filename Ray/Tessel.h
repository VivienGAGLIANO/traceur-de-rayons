//
// Created by vivien on 27/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_TESSEL_H
#define TRACEUR_DE_RAYONS_TESSEL_H

#include "Utils/Vector3.h"

class Tessel {

private:
    Vector3 v1, v2, v3;

public:
    Tessel();
    Tessel(const Vector3 &, const Vector3 &, const Vector3 &);
    Tessel(const Tessel &);
    Vector3 getNormal();
};


#endif //TRACEUR_DE_RAYONS_TESSEL_H
