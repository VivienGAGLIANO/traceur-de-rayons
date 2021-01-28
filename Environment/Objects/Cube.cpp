//
// Created by vivien on 27/01/2021.
//

#include "Cube.h"

void Cube::tesselate() {
    tessels.clear();
    Vector3 v1 = Vector3(-0.5, -0.5, -0.5);
    Vector3 v2 = Vector3(-0.5, 0.5, -0.5);
    Vector3 v3 = Vector3(0.5, 0.5, -0.5);
    Vector3 v4 = Vector3(0.5, -0.5, -0.5);
    Vector3 v5 = Vector3(-0.5, -0.5, 0.5);
    Vector3 v6 = Vector3(-0.5, 0.5, 0.5);
    Vector3 v7 = Vector3(0.5, 0.5, 0.5);
    Vector3 v8 = Vector3(0.5, -0.5, 0.5);
    tessels.push_back(Tessel(v1, v2, v4, this));
    tessels.push_back(Tessel(v1, v5, v2, this));
    tessels.push_back(Tessel(v1, v4, v5, this));
    tessels.push_back(Tessel(v8, v5, v4, this));
    tessels.push_back(Tessel(v8, v4, v7, this));
    tessels.push_back(Tessel(v8, v7, v5, this));
    tessels.push_back(Tessel(v3, v4, v2, this));
    tessels.push_back(Tessel(v3, v7, v4, this));
    tessels.push_back(Tessel(v3, v2, v7, this));
    tessels.push_back(Tessel(v6, v2, v5, this));
    tessels.push_back(Tessel(v6, v5, v7, this));
    tessels.push_back(Tessel(v6, v7, v2, this));
}
