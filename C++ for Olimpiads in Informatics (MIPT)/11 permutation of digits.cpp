/* Permutation of digits

A four-digit negative number is given. It is required to swap the number of tens and hundreds in it.

Input data

The input contains a single four-digit negative integer. The unary minus is not considered a sign.

Output

Find the number
obtained from the original permutation of the number of tens and hundreds in it.

Note

This task does not allow the use of the char data type.

Sample Input 1:
-1234

Sample Output 1:
-1324

Sample Input 2:
-1212

Sample Output 2:
-1122
*/

#include <iostream>

using namespace std;

int main() {
    short a, a10, a100;
    std::cin >> a;
    a10 = a % 100 / 10;
    a100 = a % 1000 / 100;
    std::cout << a / 1000 << -a10 << -a100 << -(a % 10) << std::endl;
}