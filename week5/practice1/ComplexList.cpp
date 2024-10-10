#include "ComplexList.h"
#include "Complex.h"
#include <iostream>

void ComplexList::set(int n, double r, double i) {
    if(n<size && n>=0) {
        complexList[n].setComplex(r,i);
    }else {
        std::cout << "number is incorrect" << std::endl;
    }
}

Complex& ComplexList::get(int n) {
    if(n<size && n>=0) {
        return complexList[n];
    }else if(n<size){
        std::cout << "minimum number is 0" << std::endl;
        return complexList[0];
    }else {
        std::cout << "maximum number is " << size << std::endl;
        return complexList[size-1];
    }
}

Complex* ComplexList::pGet(int n) {
    if(n<size && n>=0) {
        return complexList + n;
    }else {
        std::cout << "number is incorrect" << std::endl;
        return NULL;
    }
}


int ComplexList::length() const{
    return size;
}






