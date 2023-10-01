/* Desks

Some school decided to recruit three new math classes and equip their classrooms with new desks. 
Two students can sit at each desk. The number of students in each of the three classes is known. 
Print the minimum number of desks that need to be purchased for them. Each class sits in its own office.

Input format
The program receives three non-negative integers as input: the number of students in each of the three classes 
(numbers do not exceed 1000).


Output format

Print one integer - the answer to the problem.

Sample Input 1:
20
21
22
Sample Output 1:
32

Sample Input 2:
16
18
20
Sample Output 2:
27
*/

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int A = (a + 1) / 2;
    int B = (b + 1) / 2;
    int C = (c + 1) / 2;
    cout << A + B + C;
    return 0;
}