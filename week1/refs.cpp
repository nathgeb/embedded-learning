#include <iostream>

void f(int a, int& b, const int& c) {
    a = a + 10;
    b = b + 10;
    c = c + 10;
    std::cout << a << " " << b << " " << c << "\n";
}

int main() {
    int x = 1, y = 2, z = 3;
    f(x, y, z);
    std::cout << x << " " << y << " " << z << "\n";
}
