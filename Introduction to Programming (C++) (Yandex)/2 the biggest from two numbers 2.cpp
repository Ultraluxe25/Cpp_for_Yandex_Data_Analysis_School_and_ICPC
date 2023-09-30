/* Two integers are given. The program should print one if the first number is greater than the second, 
two if the second is greater than the first, or zero if they are equal.

Input format
Two numbers are entered.

Output format
Print the answer to the problem.

Sample Input:
1
2
Sample Output:
2
*/

#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  if (a > b) {
    cout << 1;
  } else if (a < b) {
    cout << 2;
  } else {
    cout << 0;
  }
  
  return 0;
}