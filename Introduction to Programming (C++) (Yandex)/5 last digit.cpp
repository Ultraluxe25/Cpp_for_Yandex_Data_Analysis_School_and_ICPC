/* Last digit

Given a natural number, print its last digit.

Input format

The input is a natural number N, not exceeding 10000.

Output format

Print one integer - the answer to the problem.

Sample Input:
753
Sample Output:
3
*/

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    cout << N % 10;
    return 0;
}