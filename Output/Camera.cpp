//
// Created by vivien on 24/01/2021.
//

#include "Camera.h"

Camera::Camera() {

}

Camera::Camera(Vector3 position, Vector3 direction, bool lookAt = true) : position(position) {
    this->direction = lookAt ? (direction - position).normalized() : direction.normalized();
}

Camera::Camera(const Camera &c) : position(c.position), direction(c.direction) {}
