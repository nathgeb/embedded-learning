#include <iostream>

//swapRef(int& a, int& b): swaps two ints using references
void swapRef(int& a, int& b)
{
    int temp1 = a;
    a = b;
    b = temp1;
}

//swapPtr(int* a, int* b): swaps using pointers, with a nullptr guard
void swapPtr(int* a, int* b)
{
    if(a != nullptr && b != nullptr)
    {
        int temp1 = *a;
        *a = *b;
        *b = temp1;
    }
}

int main()
{
    int x = 1;
    int y = 2;
    std::cout << x << " " << y << "\n";
    swapRef(x,y);
    std::cout << x << " " << y << "\n";
    swapPtr(&x,&y);
    std::cout << x << " " << y << "\n";
}