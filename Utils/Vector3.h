//
// Created by vivien on 24/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_VECTOR3_H
#define TRACEUR_DE_RAYONS_VECTOR3_H

#include <ostream>

class Vector3 {
public:
    double x, y, z;
    constexpr static const double EPSILON = 0.001; // Constant used to check orthogonality in intersection


    Vector3();
    Vector3(double, double, double);
    Vector3(const Vector3 &);
    Vector3 normalize();
    Vector3 normalized() const;

    Vector3 operator +(const Vector3 &) const;
    Vector3 operator -(const Vector3 &) const;
    Vector3 operator *(const double &) const;
    Vector3 operator ^(const Vector3 &) const; // Cross product
    double operator |(const Vector3 &) const; // Dot product
    friend Vector3 operator *(const double &, const Vector3 &);
    bool operator ==(const Vector3 &) const;
    bool operator !=(const Vector3 &) const;
    friend std::ostream& operator <<(std::ostream &, const Vector3 &);
};


#endif //TRACEUR_DE_RAYONS_VECTOR3_H
