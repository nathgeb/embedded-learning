#include <iostream>

int check(int reading) {
    if(reading == 100) {
        return 1;
    }
    return 0;
}

int main() {
    int count = 3;
    int i = -1;
    if (i< count) {
        std::cout << "less\n";
    }
    std::cout << check(50) << "\n";
}