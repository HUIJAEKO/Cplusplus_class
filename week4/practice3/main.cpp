#include <iostream>
#include "Child.h"

int main()
{
    Child child1(4);
    Child child2(9);

    std::cout << "Initial state:" << std::endl;
    std::cout << "Child 1: ";
    child1.show();
    std::cout << "Child 2: ";
    child2.show();

    std::cout << "\n1st game" << std::endl;
    child1.win(child2, 2);
    std::cout << "Child 1: ";
    child1.show();
    std::cout << "Child 2: ";
    child2.show();

    std::cout << "\n2nd game"<< std::endl;
    child2.win(child1, 7);
    std::cout << "Child 1: ";
    child1.show();
    std::cout << "Child 2: ";
    child2.show();

    return 0;
}
