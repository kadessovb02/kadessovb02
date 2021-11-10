#include<iostream>
using namespace std; 
void sequence (unsigned int* n){
   int* sum;
   int* seq = new int[*n];
    for (int i = 0; i < *n; i++)
    {
       cin>>*(seq+i); 
    } 
    for (int i = 0; i < *n; i++)
    {
       cout<<*(seq+i)<<" "; 
    } 
    delete []seq;
}
int main()
{
    unsigned int n; 
    cin>>n;
    sequence(&n);
}