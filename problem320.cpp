#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    double x, a, res, sum;
    int n;
    cin >> x >> a >> n ;
    for (int i = 1; i <= n; i++)
    {
        x = pow(x+a, 2);
    }
    cout<<(x+a);

}
