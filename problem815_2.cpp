#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main () {
    unsigned int t1, t2, sum1, sum2, g = 0;
    cin>>t1>>t2;
    int* a = new int[8];
    for (int i = t1; i < (t2+1); i++)
    {
        sum1 = 
          i/10000000 
        + i%10000000/1000000 
        + i%10000000%1000000/100000 
        + i%10000000%1000000%100000/10000;
        sum2 = 
          i%10000000%1000000%100000%10000/1000  
        + i%10000000%1000000%100000%10000%1000/100
        + i%10000000%1000000%100000%10000%1000%100/10  
        + i%10000000%1000000%100000%10000%1000%100%10;
        if(sum1 == sum2){
            g++;
        }
    }
    cout<<g;
}