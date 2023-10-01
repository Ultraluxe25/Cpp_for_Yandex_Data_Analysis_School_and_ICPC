/* Digital Watch

Electronic clocks show time in the format h:mm:ss (from 0:00:00 to 23:59:59), that is, 
first the number of hours is recorded, then a two-digit number of minutes is required, 
then a two-digit number of seconds is required. The number of minutes and seconds, 
if necessary, is padded to a two-digit number with zeros.
N seconds have passed since the beginning of the day. Print what the clock will show.

Input format

The input is given a natural number N, not exceeding
1
0
7
10
7
 (10000000).

Output format

Print the answer to the problem.

Sample Input 1:
3602
Sample Output 1:
1:00:02

Sample Input 2:
129700
Sample Output 2:
12:01:40
*/

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int day = N % 86400;
    int hour = day / 3600;
    int min10 = day % 3600 / 600;
    int min1 = day % 600 / 60;
    int sec10 = day % 60 / 10;
    int sec1 = day % 10;
    
    cout << hour << ":";
    cout << min10 << min1 << ":";
    cout << sec10 << sec1;
    
    return 0;
}