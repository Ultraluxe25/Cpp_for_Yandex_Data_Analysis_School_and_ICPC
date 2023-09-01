/* You are given two integers. Print the value of the largest of them. If the numbers are equal, print any of them.

Input data format
Two numbers are entered.
Output format
Output the answer to the problem.

Sample Input 1:
1
2
Sample Output 1:
2

Sample Input 2:
5
3
Sample Output 2:
5
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << a;
    } else if (b > a) {
        cout << b;
    } else {
        cout << a;
    }
}
