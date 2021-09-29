#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, sum;
    for (double i = 1; i <= 10; i++)
    {
        cin>>a;
        sum += pow(a,i);
    } 
    cout<<sum;
}