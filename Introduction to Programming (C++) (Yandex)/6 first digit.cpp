/* First digit of a two-digit number

A two-digit number is given. Print its first digit (tens number)

Input format

The input is a natural two-digit number N.

Output format

Print one integer - the answer to the problem.

Sample Input:
42
Sample Output:
4
*/

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    cout << N / 10;
    return 0;
}