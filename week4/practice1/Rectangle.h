#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"

class Rectangle {
    Point lt, rb;

public:
    bool init(Point& left, Point& right);

    int getArea() const;
    int getPerimeter() const;
    int getWidth() const;
    int getHeight() const;
    void show();
};

inline bool Rectangle::init(Point& left, Point& right) {
    if(left.getX() > right.getX() || left.getY() > right.getY()) {
        return false;
    }
    lt = left;
    rb = right;

    return true;
}

#endif //RECTANGLE_H
