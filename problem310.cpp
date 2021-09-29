#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
    int x, r = 1;
    cin >> x;
    for (int i = 0; i < x; i++) // loop
    {
        r*=2; // power of 2 without using pow() function;
    }
    
    cout << r;
}
