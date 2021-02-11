//
// Created by vivien on 27/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_CUBE_H
#define TRACEUR_DE_RAYONS_CUBE_H


#include "Object.h"

class Cube : public Object {
private:
    void tesselate() override;

public:
    explicit Cube(const Vector3 &position = Vector3(), const Vector3 &rotation = Vector3(), double scale = 1);
    Cube(const Cube &);
};


#endif //TRACEUR_DE_RAYONS_CUBE_H
