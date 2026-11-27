#include <iostream>

void bump(int a, int&b, int* c) {
    a++;
    b++;
    if (c != nullptr)
    {
        (*c)++;
    }
    std::cout << c << "\n";
    std::cout << &a << " " << &b << "\n";
}

int main() {
    int x = 1, y = 1, z = 1;
    bump(x, y, nullptr);
    std::cout << x << y << z << "\n";
    std::cout << &x << " " << &y << " " << &z << "\n";
}