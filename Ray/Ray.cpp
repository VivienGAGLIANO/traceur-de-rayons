//
// Created by vivien on 24/01/2021.
//

#include "Ray.h"

Ray::Ray(const Vector3 &position, const Vector3 &direction) : position(position), direction(direction) {}

std::list<Tessel> Ray::computeIntersection(std::list <Tessel> sceneTessels) {
    std::list<Tessel> intersected{};
    for (Tessel tessel : sceneTessels)
    {
        if (computeIntersectionALaMano(tessel))
            intersected.push_back(tessel);
    }
    return intersected;
}

bool Ray::computeIntersectionALaMano(Tessel tessel) {
    Vector3 normal = tessel.getNormal();
    if ((normal|direction) <= Vector3::EPSILON) return false; // Ray is in the triangle's plane
    double t = - (normal|position) / (normal|direction);
    Vector3 intersectionPoint = position + t * direction;

    Vector3 v0 = tessel.getVertex(2) - tessel.getVertex(0);
    Vector3 v1 = tessel.getVertex(1) - tessel.getVertex(0);
    Vector3 v2 = intersectionPoint - tessel.getVertex(0);

    double dot00 = v0|v0;
    double dot01 = v0|v1;
    double dot02 = v0|v2;
    double dot11 = v1|v1;
    double dot12 = v1|v2;

    double denominator = dot00*dot11 - dot01*dot01;
    double u = (dot11*dot02 - dot01*dot12) / denominator;
    double v = (dot00*dot12 - dot01*dot02) / denominator;

    return u+v <= 1 && u >= 0 && v >= 0;
}

Ray::Ray(const Ray & r) = default;
