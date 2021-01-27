//
// Created by vivien on 24/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_VECTOR3_H
#define TRACEUR_DE_RAYONS_VECTOR3_H


class Vector3 {
public:
    double x, y, z;

    Vector3();
    Vector3(double, double, double);
    Vector3(const Vector3 &);
    Vector3 normalize();
    Vector3 normalized() const;

    Vector3 operator +(const Vector3 &) const;
    Vector3 operator -(const Vector3 &) const;
    Vector3 operator *(const double &) const;
    Vector3 operator ^(const Vector3 &) const;
    friend Vector3 operator *(const double &, const Vector3 &);
    bool operator==(const Vector3 &) const;
    bool operator!=(const Vector3 &) const;
};


#endif //TRACEUR_DE_RAYONS_VECTOR3_H
