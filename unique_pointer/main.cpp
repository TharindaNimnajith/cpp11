#include "someClass.h"
#include "UniquePointer.h"
#include "UniquePointer.cpp"
#include <iostream>

int main()
{
    {
        UniquePointer<Some> obj1(new Some("Message"));
        obj1->showMessage();
        // UniquePointer<Some> obj2  = obj2; Compile error
        // UniquePointer<Some> obj2 (obj2); Compile error
    }

    return 0;
}
