#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
bool compare (int a, int b){
        if (a > b)
        {
            return 1;
        }
        else{
            return 0;
        }
        }
void print (int b, char c[]){
        for (int j = 0; j < b; j++)
        {
            cout<<c[j];
        }
}
int main () {
    char **a = new char*[3];
    int ind = 0;
    for (int i = 0; i < 3; i++)
    {
        a[i] = new char[101];
        cin >> a[i];
    }
    int x[3];
        x[0] = strlen(a[0]);   
        x[1] = strlen(a[1]);    
        x[2] = strlen(a[2]);
    if (x[0] != x[1] && x[0] != x[2] && x[1] != x[2])
    {
        int num = compare(compare(x[0], x[1]), x[2]);
        for (int i = 0; i < 3; i++)
        {
            if (num == x[i])
            {
                ind = i;
                break;  
            }
        }
        print(num, a[ind]);
    }
    else
    {
        compare(compare(x[0], x[1]),x[2]);
    }
    
    
    
    

}