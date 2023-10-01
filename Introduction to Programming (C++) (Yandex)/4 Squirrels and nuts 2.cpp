/* Squirrels and nuts - 2

N squirrels found K nuts and decided to divide them equally. 
Determine how many nuts will remain after all the squirrels take an equal number of nuts.

Input format

The input is two positive integers N and K, each of which does not exceed 10000.

Output format

Print one integer
- answer to the problem.

Sample Input:
3
14
Sample Output:
2
*/

#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    cout << K % N;
    return 0;
}