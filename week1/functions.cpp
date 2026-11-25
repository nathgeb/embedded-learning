#include <iostream>
double average(int a, int b);

int main() {

int a = 1;
int b = 2;
std::cout << average(a,b);

}

double average(int a, int b)
{
return double (a+b)/2;
}
