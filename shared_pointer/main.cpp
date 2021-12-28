#include "someClass.h"
#include "SharePointer.cpp"

int main()
{
    SharePointer<Some> obj1(new Some());
    {
        std::cout << "Scope start " << std::endl;
        SharePointer<Some> obj2(obj1);
        SharePointer<Some> obj3 = obj1;

        std::cout << "Copy pointer obj1 to obj2 and count from obj1: " << obj1.use_count() << std::endl;
        std::cout << "Scope end " << std::endl;
    }
    std::cout << "After deleting obj2 obj3 object count: " << obj1.use_count() << std::endl;
}
