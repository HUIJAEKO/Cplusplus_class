#ifndef CHILD_H
#define CHILD_H

class Child {
private:
    int marbles;

public:
    Child(int Nmarbles);
    void show() const;
    void win(Child &oppo, int winMarbles);
};

inline Child::Child(int Nmarbles) {
    marbles = Nmarbles;
}

#endif //CHILD_H
