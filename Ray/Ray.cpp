//
// Created by vivien on 24/01/2021.
//

#include "Ray.h"

Ray::Ray() {
    Ray(Vector3(), Vector3());
}

Ray::Ray(const Vector3 &position, const Vector3 &direction) : position(position), direction(direction) {}

Ray::Ray(const Ray & r) : position(r.position), direction(r.direction) {}
