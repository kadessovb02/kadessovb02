#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int more (int a, int b){
        if (a > b)
        {
            return 1;
        }
        else{
            return 0;
        }
}
void ans(int a1, char a[], char c[]){
    for (int i = 0; i < a1; i++)
        {
            if(a[i]>c[i]){
                for (int j = 0; j < a1; j++)
                {
                    cout<<a[i];
                }
                break;
            }
            else{
                for (int j = 0; j < a1; j++)
                {
                    cout<<c[i];
                }
                break;
            }
        }     
}
int main () {
    char* a = new char[101];
    char* b = new char[101];
    char* c = new char[101];
    cin >> a >> b >> c;
    int num = 0;
    int a1 = strlen(a);
    int b1 = strlen(b);
    int c1 = strlen(c);
    if (a1 != b1 && c1 != b1 && c1 != a1)
    {
        if (a1>b1 && a1>c1)
        {
            for (int i = 0; i < a1; i++)
            {
                cout <<a[i];
            }
        }
        else if(b1>a1 && b1>c1)
        {
            for (int i = 0; i < b1; i++)
            {
                cout <<b[i];
            }
        }
        else if(c1>a1 && c1>b1)
        {
            for (int i = 0; i < c1; i++)
            {
                cout <<c[i];
            }
        }
    }
    else{
    if (a1 > b1)
    {
        ans(a1, a, c);   
    }
    else if(a1 > c1)
    {
        ans(a1, a, b);        
    }
    else
    {
        for (int i = 0; i < a1; i++)
        {
        if (a[i]>b[i] && a[i]>c[i])
        {
            for (int j = 0; j < a1; j++)
            {
                cout <<a[j];
            }
            break;
        }
        else if(b[i]>a[i] && b[i]>c[i])
        {
            for (int j = 0; j < b1; j++)
            {
                cout <<b[j];
            }
            break;
        }
        else if(c[i]>a[i] && c[i]>b[i])
        {
            for (int j = 0; j < c1; j++)
            {
                cout <<c[j];
            }
            break;
        }
        else
        {
            for (int j = 0; j < a1; j++)
            {
                cout <<a[j];
            }
            break;
        }
        
        }
    }
    }
}
