#include <iostream>

#include "Rectangle.h"
#include "Point.h"

int main() {
    Point lt, rb;
    lt.init(0,0);
    rb.init(4,5);

    Rectangle rectangle;
    if(rectangle.init(lt,rb)) {
        rectangle.show();
    }
    return 0;
}
