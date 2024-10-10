#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double real;
    double image;

public:
    Complex();
    Complex(double r, double i);

    void setComplex(double r, double i);
    double getReal() const;
    double getImage() const;
    void showComplex() const;
};

inline Complex::Complex() {
    real = 0;
    image = 0;
}

inline Complex::Complex(double r, double i) {
    real = r;
    image = i;
}
#endif //COMPLEX_H
