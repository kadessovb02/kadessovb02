#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
    double x, y, z; // var declaration
    cin >> x >> y >> z;
    if ((x+y)>z && (x+z)>y && (y+z)>x) { // triangle's condition to accept
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
