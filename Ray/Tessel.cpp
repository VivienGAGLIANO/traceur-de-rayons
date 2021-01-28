//
// Created by vivien on 27/01/2021.
//

#include "Tessel.h"

Vector3 Tessel::getNormal() {
    return ((v2 - v1) ^ (v3 - v1)).normalized();
}

Tessel::Tessel(const Vector3 &v1, const Vector3 &v2, const Vector3 &v3, Object *owner) : v1(v1), v2(v2), v3(v3), owner(owner) {}

Tessel::Tessel(const Tessel &) = default;