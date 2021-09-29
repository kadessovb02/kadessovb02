#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
    double x, sum = 1, j;
    cin>>x;
    for (int i = 1; i <= 6; i++)
    {
        sum *= (x-pow(2,i))/(x-(pow(2,i)-1));
    }
    cout<<(sum);

}
