//
// Created by vivien on 27/01/2021.
//

#include <utility>
#include "Environment.h"

Environment::Environment(std::string name, const Camera &camera) : name(std::move(name)), camera(camera) {}

Environment::Environment(const Environment &) = default;

std::list<Tessel> Environment::getTessels() {
    std::list<Tessel> tessels{};
    for (Object *obj : objects) {
        tessels.insert(tessels.end(), obj->getTessels().begin(), obj->getTessels().end());
    }
    return tessels;
}

