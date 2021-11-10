#include<iostream>
#include<cstring>
using namespace std; 
void sequence (unsigned int* n){
   char* req = new char[*n];
   int y = 100;
   int length[100] = {0}, quantity[100] = {0};
   char** seq = new char* [*n];
    for (int i = 0; i < *n; i++)
    {
       seq[i] = new char[y];
    } 
    for (int i = 0; i < *n; i++)
    {
      cin>>*(req+i);
      cin>>*(seq+i); 
      length[i] = strlen(seq[i]); 
    } 
    
    for (int i = 0; i < *n; i++)
    {
       for (int j = 0; j < length[i]; j++)
       {
          if (*(req+i) == *(*(seq+i)+j))
          {
             quantity[i]++;
          }
       }
       cout<<quantity[i]<<" "<< *(req+i) <<" in"<<" "<<*(seq+i)<<endl;;
       
    }
    delete []req;
    delete []seq;
}
int main()
{
    unsigned int n; 
    cin>>n;
    sequence(&n);
}