//
// Created by vivien on 27/01/2021.
//

#include "Tessel.h"

Vector3 Tessel::getNormal() {
    return ((v2 - v1) ^ (v3 - v1)).normalized();
}

Tessel::Tessel() {
    Tessel(Vector3(), Vector3(), Vector3());
}

Tessel::Tessel(const Vector3 &v1, const Vector3 &v2, const Vector3 &v3) : v1(v1), v2(v2), v3(v3) {}

Tessel::Tessel(const Tessel &t) {
    Tessel(t.v1, t.v2, t.v3);
}
