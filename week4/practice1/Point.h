#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x,y;

public:
    void init(int xPos, int yPos);
    int getX() const;
    int getY() const;
    bool setX(int xPos);
    bool setY(int yPos);
};

inline void Point::init(int xPos, int yPos) {
    x = xPos;
    y = yPos;
}

#endif //POINT_H
