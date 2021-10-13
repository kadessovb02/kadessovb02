#include<iostream>
using namespace std; 
double pow(double a, int n){
    double result = 1.00;
    for(int i=0; i<n; i++){
        result *= a;
    }
    return result;
}
int main()
{
    double a, n;
    cin>>a>>n;
    cout<<pow(a, n);
}