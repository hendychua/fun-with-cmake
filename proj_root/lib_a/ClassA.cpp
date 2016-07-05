#include "ClassA.h"
#include "ClassB.h"

#include <iostream>

using namespace std;

ClassA::ClassA()
{
}

void ClassA::Foo()
{
    cout << "Class A called." << endl;
}

void ClassA::Bar()
{
    ClassB myClassB;
    cout << "*** Class A calling Class B." << endl;
    myClassB.Foo();
    cout << "*** Done calling." << endl;
}
