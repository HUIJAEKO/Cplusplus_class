#include <iostream>
#include "Complex.h"
#include "ComplexList.h"
int main()
{
    ComplexList cl1;
    ComplexList cl2(5);

    //cl1 값 설정
    for(int i = 0; i < 10; i++) {
        cl1.set(i,i+1.0,i+2.0);
    }
    cl1.set(11,1.0,1.0);

    //cl2 값 설정
    for(int i = 0; i < 5; i++) {
        cl2.set(i,i+1.0,i+2.0);
    }
    cl2.set(6,1.0,1.0);

    //cl1 값 출력
    for(int i = 0; i < 10; i++) {
        cl1.get(i).showComplex();
    }
    std::cout << "" << std::endl;

    //cl2 값 출력
    for(int i = 0; i < 5; i++) {
        cl2.get(i).showComplex();
    }
    std::cout << "" << std::endl;

    //n<0
    cl1.get(-1).showComplex();
    //n>size
    cl1.get(11).showComplex();
    std::cout << "" << std::endl;

    //pGet test
    cl1.pGet(-1)->showComplex();

    return 0;
}
