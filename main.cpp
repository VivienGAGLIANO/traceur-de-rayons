//
// Created by vivien on 27/01/2021.
//

#include <iostream>
#include <string>
#include <cstdio>

class Test {
public:
    double d;

    Test() : d(0.0) {}
    // Test(const Test &t) : d(t.d) {}
};

int main()
{
    Test a = Test();
    a.d = 10.;
    Test b = Test(a);
    printf("a.d : %d, b.d : %d\n", a.d, b.d);
    return 0;
}