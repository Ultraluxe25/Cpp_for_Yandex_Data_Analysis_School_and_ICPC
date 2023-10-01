/* Squirrels and nuts - 1

N squirrels found K nuts and decided to divide them equally. 
Determine how many nuts each squirrel will get.

Input format

The input is two positive integers N and K, each of which does not exceed 10000.

Output format

Print one integer - the answer to the problem.

Sample Input:
3
14
Sample Output:
4
*/

#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    cout << K / N;    
    return 0;
}