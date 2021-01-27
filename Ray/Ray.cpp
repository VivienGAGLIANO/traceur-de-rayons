//
// Created by vivien on 24/01/2021.
//

#include "Ray.h"

Ray::Ray() {
    Ray(Vector3(), Vector3());
}

Ray::Ray(Vector3 position, Vector3 direction) : position(position), direction(direction) {}

Ray::Ray(const Ray & r) : position(r.position), direction(r.direction) {}
