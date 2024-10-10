#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double real;
    double image;

public:
    Complex();  // 기본 생성자
    Complex(double r, double i);  // 실수부, 허수부 초기화 생성자

    void setComplex(double r, double i);  // 복소수 설정 함수
    double getReal() const;  // 실수부 반환 함수
    double getImage() const;  // 허수부 반환 함수
    void showComplex() const;  // 복소수 출력 함수 (2+3i 형식)
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
