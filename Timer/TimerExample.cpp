#include <chrono>
#include <iostream>

#include "Timer.h"


    void function() {
        Timer timer;

        for(int i = 0; i < 1000; i++) {
            std::cout << i << "\n";
        }
    }

int main() {

    function();
    std::cin.get();
    std::cout << "end?";
}

