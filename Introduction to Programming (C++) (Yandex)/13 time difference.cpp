/* Time difference

The values ​​of two points in time belonging to the same day are given: 
hours, minutes and seconds for each point in time. 
It is known that the second moment of time came no earlier than the first. 
Determine how many seconds have passed between the two points in time.

Input format

The program receives three integers as input: hours,
minutes, seconds, defining the first moment of time and three integers, specifying the second moment of time.

Output format

Print the number of seconds between these times.

Sample Input 1:
1
1
1
2
2
2
Sample Output 1:
3661

Sample Input 2:
1
2
thirty
1
3
20
Sample Output 2:
50
*/

#include <iostream>

using namespace std;

int main() {
    int hour1, min1, sec1;
    int hour2, min2, sec2;
    
    cin >> hour1 >> min1 >> sec1;
    cin >> hour2 >> min2 >> sec2;
    
    int time1, time2;
    time1 = hour1 * 3600 + min1 * 60 + sec1;
    time2 = hour2 * 3600 + min2 * 60 + sec2;
    
    int diff = time2 - time1;
    cout << diff;
    return 0;
}