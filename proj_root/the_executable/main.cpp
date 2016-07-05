#include "ClassA.h"
#include "ClassB.h"
#include "ClassC.h"

int main()
{
    ClassA myClassA;
    ClassB myClassB;
    ClassC myClassC;

    myClassA.Foo();
    myClassB.Foo();
    myClassC.Foo();
    myClassA.Bar();

    return 0;
}
