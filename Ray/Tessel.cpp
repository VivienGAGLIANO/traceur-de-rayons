//
// Created by vivien on 27/01/2021.
//

#include "Tessel.h"

Vector3 Tessel::getNormal() {
    return ((v2 - v1) ^ (v3 - v1)).normalized();
}
