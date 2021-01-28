//
// Created by vivien on 24/01/2021.
//

#include "Camera.h"

Camera::Camera(const Vector3& position, const Vector3& direction, double distanceToScreen, bool lookAt) : position(position), distanceToScreen(distanceToScreen) {
    this->direction = lookAt ? (direction - position).normalized() : direction.normalized();
}

Camera::Camera(const Camera &c) : position(c.position), direction(c.direction) {}
