#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    unsigned int n, g = 0;
    cin >> n;
    int* seq = new int[n];
    int* seq2 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(seq+i);
    }
    for (int i = 0; i < n; i++)
    {
        if (*(seq+i)%2 == 0)
        {
            cout<<*(seq+i)<<" ";
        }
        else
        {
            seq2[g] = seq[i];
            g++;
        }
    }
    for (int i = 0; i < g; i++)
    {
        cout<< seq2[i]<<" ";
    }
    
delete []seq;
delete []seq2;
}