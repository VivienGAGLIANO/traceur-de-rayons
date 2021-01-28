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

    explicit Camera(const Vector3 &position = Vector3(0, -20, 0), const Vector3 &direction = Vector3(0, 1, 0), double distanceToScreen = 10, bool lookAt = true);
    Camera(const Camera &);
};


#endif //TRACEUR_DE_RAYONS_CAMERA_H
