//
// Created by vivien on 27/01/2021.
//

#include "Environment.h"

Environment::Environment() {
    Environment("Default");
}

Environment::Environment(std::string name) {
    Environment(name, Camera());
}

Environment::Environment(const Camera &camera) {
    Environment("Default", camera);
}

Environment::Environment(std::string name, const Camera &camera) : name(name), camera(camera) {}

Environment::Environment(const Environment &) {

}

