#include "Point.h"

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

bool Point::setX(int xPos) {
    if(xPos<0 || xPos>100) {
        return false;
    }
    x = xPos;
    return true;
}

bool Point::setY(int yPos) {
    if(yPos<0 || yPos>100) {
        return false;
    }
    y = yPos;
    return true;
}