#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
    double a, b, c; // var declaration
    cin >> a >> b >> c;
    double D = pow(b, 2)-4*a*c;
    if (D>=0 && (b!=0 && c!=0)) { // quadratic equatinon's discriminant
        cout << (-b+sqrt(D))/(2*a)<<" "<< (-b-sqrt(D))/(2*a);
    }
    else if(b==0 && c==0){   // if x is equal to "0", to avoid 0 "-0"
        cout << 0;
    }
    else {
        cout << "no solution";
    }
    return 0;
}
