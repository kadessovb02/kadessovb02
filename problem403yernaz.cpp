#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    float arr[1000], m = 1000, f;
    for ( i = 0; i < n; i++) {
        cin >> f;
        if (f < m) {
            m = f;
        }
        }
    cout << m;
}