#include<iostream>
#include<cstring>
using namespace std; 
void print(char x[100]){
    for (int i = 0; i < strlen(x); i++)
    {
        if('a' <= x[i] && x[i] <= 'z'){    // 97-122 (a-z) ASCII
            x[i] -= 'a'-'A';         // 97 - 65 = 32
        }
        cout<<x[i];
    }
}
int main()
{
    char x[100];
    cin>>x;
    print(x);
}