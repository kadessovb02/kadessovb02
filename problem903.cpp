#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main () {
    char* a = new char[100];
    cin>>a;
    for (int i = 0; i < strlen(a); i++)
    {
        if ('0' <= a[i] && a[i] <= '9')
        {
            cout<<a[i];
            if ((strlen(a)-i-1)%3 == 0)
            {
            cout<<" ";
            }
        }   
    }
}