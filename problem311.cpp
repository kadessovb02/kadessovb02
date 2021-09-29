#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, r = 1; // var declaration
    cin >> x;
    if(x == 0){  // condition
        cout<<1;
    }
    else{
        for (int i = 1; i <= x; i++)
    {
        r = r*i;
    }
    cout << r;
    }
    
    
}
