#include <iostream>
#include <cmath>
using namespace std;
double fac(double a) {
    double r = 1;
    if(a == 0){
        r = 1;
    }
    else{
        for (int i = 1; i <= a; i++)
        {
        r *= i;
        }
    }
    return r;
}
int main() {

    double x, sum;
    cin >> x;
    for(int i = 1; i <= 7; i++)
    {
    sum += pow(-1,(i+1))*pow(x,(2*i-1))/fac((2*i-1));
    }
    cout<<(sum);
}
