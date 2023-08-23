// Given a natural four-digit number, you need to swap the middle digits.

#include <iostream>

using namespace std;

int main() {
	int number, dozens, hundreds;
    cin >> number;
    dozens = number % 100 / 10;
    hundreds = number % 1000 / 100;
    cout << number / 1000 << dozens << hundreds << number % 10 << endl;
}