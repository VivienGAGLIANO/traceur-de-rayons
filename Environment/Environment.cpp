//
// Created by vivien on 27/01/2021.
//

#include <utility>
#include "Environment.h"

Environment::Environment(std::string name, const Camera &camera) : name(std::move(name)), camera(camera) {}

Environment::Environment(const Environment &) {

}

