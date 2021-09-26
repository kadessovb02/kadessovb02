#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a <= b && b <= c) {
        cout << (2 * a) << endl << (2 * b) << endl << (2 * c) << endl;
    }
    else {
        cout << (sqrt(a * a))<<" "<< (sqrt(b * b))<<" "<< (sqrt(c * c));
    }
    return 0;
}