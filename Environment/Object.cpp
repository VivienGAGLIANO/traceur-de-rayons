//
// Created by vivien on 27/01/2021.
//

#include "Object.h"

Object::Object() {

}

Object::Object(const Vector3 &position) : position(position), rotation(Vector3()), scale(scale) {}

Object::Object(const Vector3 &position, double scale) : position(position), rotation(Vector3()), scale(scale) {}

Object::Object(Vector3 position, Vector3 rotation, double scale) : position(position), rotation(rotation), scale(scale) {}

Object::Object(const Object &o) : position(o.position), rotation(o.rotation), scale(o.scale) {}
