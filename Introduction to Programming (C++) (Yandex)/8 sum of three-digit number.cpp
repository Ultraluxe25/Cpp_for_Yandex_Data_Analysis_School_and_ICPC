/* Sum of digits of a three-digit number

A three-digit integer number is given. Find the sum of its digits.

Input format

The input is a number from 100 to 999.

Output format

Print one integer - the answer to the problem.

Sample Input:
476
Sample Output:
17
*/

#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    int a = number / 100;
    int b = number / 10 % 10;
    int c = number % 10;
    cout << a + b + c;
    return 0;
}