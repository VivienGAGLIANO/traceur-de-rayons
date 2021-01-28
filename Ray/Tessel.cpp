//
// Created by vivien on 27/01/2021.
//

#include "Tessel.h"

Vector3 Tessel::getNormal() {
    return ((v1 - v0) ^ (v2 - v0)).normalized();
}

Tessel::Tessel(const Vector3 &v1, const Vector3 &v2, const Vector3 &v3, Object *owner) : v0(v1), v1(v2), v2(v3), owner(owner) {}

Vector3 Tessel::getVertex(int index) {
    switch (index) {
        case 0:
            return v0;
        case 1:
            return v1;
        case 2:
            return v2;
        default:
            return v0;
    }
}

Vector3 Tessel::getBarycenter() {
    return v0+v1+v2 * ((double)1/3);
}

Tessel::Tessel(const Tessel &) = default;