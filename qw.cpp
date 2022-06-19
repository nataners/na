#include <iostream>

int Sqr(int q)
{
    return q * q;
}

int main() {
    int number;
    std::cout << "NUMBER ";
    std::cin >> number;
    std::cout << Sqr(number);
    return 0;
}
