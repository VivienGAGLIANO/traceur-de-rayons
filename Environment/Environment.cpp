//
// Created by vivien on 27/01/2021.
//

#include <utility>
#include "Environment.h"

Environment::Environment(std::string name, const Camera &camera) : name(std::move(name)), camera(camera) {}

Environment::Environment(const Environment &) = default;

std::list<Tessel> Environment::getTessels() const {
    std::list<Tessel> tessels{};
    for (Object *obj : objects) {
        std::list<Tessel> objTessel = obj->getTessels();
        tessels.insert(tessels.end(), objTessel.begin(), objTessel.end());
    }
    return tessels;
}

void Environment::addObject(Object *obj) {
    objects.push_back(obj);
}

void Environment::addObject(std::list<Object *> objList) {
    objects.insert(objects.end(), objList.cbegin(), objList.cend());
}

