// In this problem, you need to find the remainder after dividing A and B.

#include <iostream>

using namespace std;

int main() {
	long a, b;
 std::cin >> a >> b;
 std::cout << (a % b + b) % b << std::endl;
}