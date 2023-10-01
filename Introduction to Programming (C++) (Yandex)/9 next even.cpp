/* Next even

The input is a natural number N. Print the next even number

Input format

The input is a positive integer N not exceeding 10000.

Output format

Print one integer - the answer to the problem.

Sample Input 1:
7
Sample Output 1:
8

Sample Input 2:
8
Sample Output 2:
10
*/

#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    cout << (number + 2) / 2 * 2;
    return 0;
}