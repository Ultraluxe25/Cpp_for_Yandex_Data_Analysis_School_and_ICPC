/* Tens number

Given a non-negative integer N, determine the number of tens
in it (the penultimate digit of the number). 
If there is no penultimate digit, then we can assume that the number of tens is zero.

Input format

The input is a positive integer N (0 ≤ N ≤ 1000000).

Output format

Print one integer - the answer to the problem.

Sample Input:
73
Sample Output:
7
*/

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    cout << N / 10 % 10;
    return 0;
}