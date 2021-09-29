#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, n, r = 1, r2 = 0;
    cin >> a;
    cin >> n;
        for (int i = 0; i <= (n); i++)
    {
        r = (1/(a+i))*r;
        r2 = (r + r2);
    }
    cout << r2;
}
