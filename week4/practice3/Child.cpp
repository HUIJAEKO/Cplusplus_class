#include "Child.h"
#include <iostream>

void Child::show() const {
    std::cout << marbles << std::endl;
}

void Child::win(Child &oppo, int winMarbles) {
    if (oppo.marbles >= winMarbles) {
        marbles += winMarbles;
        oppo.marbles -= winMarbles;
    } else {
        std::cout << "Opponent doesn't have enough marbles. " << oppo.marbles << " marbles transferred." << std::endl;
        marbles += oppo.marbles;
        oppo.marbles = 0;
    }
}

