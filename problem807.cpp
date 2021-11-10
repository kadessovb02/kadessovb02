#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    unsigned int n = 0, g = 0, sum = 0;
    cin >> n;
    g = n;
    int* seq = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(seq+i);
    }
    for (int i = 0; i < g; i++)
    {
        if (*(seq+i) == 0)
        {
            g = i;
            for (int j = i+1; j < n; j++)
            {
                if (*(seq+j) == 0)
                {
                    break;
                } 
                sum += *(seq+j); 
            }
        }
    }
    cout<<sum;
    delete []seq;
}