#include "Rectangle.h"

#include <iostream>

int Rectangle::getArea() const{
    int dx = rb.getX() - lt.getX();
    int dy = rb.getY() - lt.getY();

    return dx * dy;
}

int Rectangle::getPerimeter() const{
    int dx = rb.getX() - lt.getX();
    int dy = rb.getY() - lt.getY();

    return 2 * (dx + dy);
}

int Rectangle::getWidth() const {
    int dx = rb.getX() - lt.getX();
    return dx;
}

int Rectangle::getHeight() const {
    int dy = rb.getY() - lt.getY();
    return dy;
}

void Rectangle::show() {
    std::cout << getArea() << '\n';
    std::cout << getPerimeter() << '\n';
}


