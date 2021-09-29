#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double val;
    val = 103;
    int x;
    cin>>x;
    for (double i = 101; i > 0; i -= 2)
    {
     val = 1/val + i;
    }
    cout<<(1/val);
    
}