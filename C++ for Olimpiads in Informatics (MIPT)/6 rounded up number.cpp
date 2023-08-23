/* In this problem, you need to learn how to divide by an integer with rounding up.

Sample Input 1:
7 3

Sample Output 1:
3

Sample Input 2:
10 2

Sample Output 2:
5 
*/

#include <iostream>

using namespace std;

int main() {
	int a, b;
    std::cin >> a >> b;
    std::cout << (a + b - 1) / b << std::endl;
}