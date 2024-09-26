#include <iostream>

using std::cout;
using std::endl;

class Circle{
public:
    const double PI = 3.14159265;
    double radius;
    double getArea();
    bool setRadius(double);
};

bool Circle::setRadius(double r) {
    if(r<0) {
        return false;
    }
    radius = r;
    return true;
}

double Circle::getArea() {
    double area = PI * radius * radius;
    return area;
}

int main()
{
    Circle c1;
    if(c1.setRadius(1.0) == false) {
        return -1;
    }
    double area1 = c1.getArea();
    cout << area1 << endl;

    Circle c2;
    if(c2.setRadius(10.0) == false) {
        return -1;
    }
    double area2 = c2.getArea();
    cout << area2 << endl;

    return 0;
}