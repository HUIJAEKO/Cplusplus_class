#include "Complex.h"
#include <iostream>

void Complex::setComplex(double r, double i) {
    real = r;
    image = i;
}

double Complex::getReal() const {
    return real;
}

double Complex::getImage() const {
    return image;
}

void Complex::showComplex() const {
    std::cout << real;
    if (image >= 0) {
        std::cout << "+" << image << "i" << std::endl;
    } else {
        std::cout << image << "i" << std::endl;
    }
}





