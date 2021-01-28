//
// Created by vivien on 24/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_RAY_H
#define TRACEUR_DE_RAYONS_RAY_H


#include "Utils/Vector3.h"
#include "Tessel.h"

class Ray {

private:
    Vector3 position;
    Vector3 direction;

public:
    explicit Ray(const Vector3 &position = Vector3(), const Vector3 &rotation = Vector3());
    Ray(const Ray &);
    std::list<Tessel> computeIntersection(std::list<Tessel> sceneTessels);
    bool computeIntersectionALaMano(Tessel tessel);
};


#endif //TRACEUR_DE_RAYONS_RAY_H
