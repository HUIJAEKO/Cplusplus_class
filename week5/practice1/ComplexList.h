#ifndef COMPLEXLIST_H
#define COMPLEXLIST_H

#include "Complex.h"

class ComplexList {
private:
    Complex* complexList;
    int size;
public:
    ComplexList(int s=10);
    ~ComplexList();
    void set(int n, double r, double i);
    Complex& get(int n);
    Complex* pGet(int n);
    int length() const;
};

inline ComplexList::ComplexList(int s) {
    size = s;
    complexList = new Complex[size];
}

inline ComplexList::~ComplexList() {
    delete[] complexList;
}


#endif =
