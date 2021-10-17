#include<iostream>
#include<cstring>
using namespace std; 
void print(char x[100]){
    for (int i = 0; i < strlen(x); i++)
    {
        if(97 <= x[i] && x[i] <= 122){    // 97-122 (a-z) ASCII
            x[i] -= 32;         // 97 - 65 = 32
            cout<<x[i];
        }
        else if(65 <= x[i] && x[i] <= 90){    // 65-90 (A-Z) ASCII
            x[i] += 32;         // 65 - 97 = -32
            cout<<x[i];
        }
        
    }
}
int main()
{
    char x[100];
    cin>>x;
    print(x);
}