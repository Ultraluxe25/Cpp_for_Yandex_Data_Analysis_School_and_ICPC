/* Perimeter of a rectangle

In this problem, you need to find the perimeter of a rectangle, knowing its sides

Input data

The input contains two integers a, b (1 ≤ a, b ≤ 1000) - the lengths of the sides of the rectangle.

Output

In response, write out a single number - the perimeter of the rectangle.

Note

The perimeter of a rectangle is the sum of the lengths of its sides.

Sample Input 1:
17

Sample Output 1:
16

Sample Input 2:
173 41

Sample Output 2:
428
*/


#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int p = 2 * (a + b);
    cout << p;
}