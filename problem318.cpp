#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, res, sum; // var(d/t:double) declaration
    int n;
    res = 0;
    cin >> a >> n ;
    for(int i = 1; i <= n; i++){
        res = 1/pow(a, 2*i)+res; // loop
    }
    res += (1/a);
    cout<<res;

}
