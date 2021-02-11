//
// Created by vivien on 24/01/2021.
//

#include "Vector3.h"
#include <cmath>

Vector3::Vector3() : x(0), y(0), z(0) {}

Vector3::Vector3(double x, double y, double z) : x(x), y(y), z(z) {}

Vector3::Vector3(const Vector3 & v) : x(v.x), y(v.y), z(v.z) {}

Vector3 Vector3::normalize() {
    *this = normalized();
    return *this;
}

Vector3 Vector3::normalized() const {
    if (*this == Vector3())
        return *this;
    return *this * (1 / sqrt(pow(x, 2) + pow(y,2 ) + pow(z, 2)));
}

Vector3 Vector3::operator +(const Vector3 &v) const {
    return Vector3(x+v.x, y+v.y, z+v.z);
}

Vector3 Vector3::operator -(const Vector3 &v) const {
    return *this + (-1 * v);
}

Vector3 Vector3::operator *(const double &d) const {
    return Vector3(d*x, d*y, d*z);
}

bool Vector3::operator ==(const Vector3 &v) const {
    return v.x == x && v.y == y && v.z == z;
}

bool Vector3::operator !=(const Vector3 &v) const {
    return !(*this == v);
}

Vector3 operator *(const double &d, const Vector3 &v) {
    return v * d;
}

Vector3 Vector3::operator ^(const Vector3 &v) const {
    return Vector3(y*v.z - z*v.y, z*v.x - x*v.z, x*v.y - y*v.x);
}

double Vector3::operator |(const Vector3 &v) const {
    return x*v.x + y*v.y + z*v.z;
}

std::ostream& operator <<(std::ostream &s, const Vector3 &v) {
    s << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return s;
}
