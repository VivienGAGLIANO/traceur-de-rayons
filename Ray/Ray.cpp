//
// Created by vivien on 24/01/2021.
//

#include "Ray.h"

Ray::Ray(const Vector3 &position, const Vector3 &direction) : position(position), direction(direction) {}

Ray::Ray(const Ray & r) = default;
