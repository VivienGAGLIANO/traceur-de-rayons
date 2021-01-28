//
// Created by vivien on 27/01/2021.
//

#include "Object.h"

Object::Object(const Vector3& position, const Vector3& rotation, double scale) : position(position), rotation(rotation), scale(scale) {}

Object::Object(const Object &o) : position(o.position), rotation(o.rotation), scale(o.scale) {}

std::list<Tessel> Object::getTessels() {
    if (tessels.empty() || shouldComputeTessel)
    {
        tesselate();
        shouldComputeTessel = false;
    }
    return tessels;

}
