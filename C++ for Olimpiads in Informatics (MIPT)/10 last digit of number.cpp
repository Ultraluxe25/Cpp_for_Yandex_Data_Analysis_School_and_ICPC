// In this problem, you need to find the last digit of a given number.

#include <iostream>

using namespace std;

int main() {
    unsigned long number;
    std::cin >> number;
    std::cout << number % 10;
}