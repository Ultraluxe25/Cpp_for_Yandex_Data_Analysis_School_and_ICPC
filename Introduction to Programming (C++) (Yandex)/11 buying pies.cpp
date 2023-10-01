/* Buying pies

A pie in the canteen costs A rubles and B kopecks. 
Determine how many rubles and kopecks you need to pay for N pies.

Input format

The program receives three numbers as input: 
A, B, N - integers, positive, not exceeding 10000.

Output format
The program should display two numbers separated by a space: 
the cost of the purchase in rubles and kopecks.

Sample Input 1:
10
15
2
Sample Output 1:
20 30

Sample Input 2:
2
50
4
Sample Output 2:
100
*/

#include <iostream>

using namespace std;

int main() {
    int ruble, coin, cake;
    cin >> ruble >> coin >> cake;
    int totalPrice = (ruble * 100 + coin) * cake;
    cout << totalPrice / 100 << ' ' << totalPrice % 100;
    return 0;
}
