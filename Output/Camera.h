//
// Created by vivien on 24/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_CAMERA_H
#define TRACEUR_DE_RAYONS_CAMERA_H

#include "Utils/Vector3.h"

class Camera {
public:
    Vector3 position;
    Vector3 direction;
    double distanceToScreen;

    Camera();
    Camera(Vector3, Vector3, bool);
    Camera(const Camera &);
};


#endif //TRACEUR_DE_RAYONS_CAMERA_H
