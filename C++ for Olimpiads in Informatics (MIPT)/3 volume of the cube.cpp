// Find the volume of the cube, knowing the length of its edge.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int side;
    cin >> side;
    int volume = pow(side, 3);
    cout << volume;
}