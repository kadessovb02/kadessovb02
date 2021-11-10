#include<iostream>
using namespace std; 
void swapp(unsigned int* x, unsigned int* y){
    unsigned int temp = *x;
    *x = *y;
    *y = temp;
     
}
int main()
{
    unsigned int x, y; // unsigned int bcs 0<=a,b<=4 294 967 295
    cin>>x>>y;
    swapp(&x, &y);
    cout<<x<<" "<<y<<endl;
}