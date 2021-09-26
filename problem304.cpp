#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
    double x, y, z; // var declaration
    cin >> x >> y >> z;
    if ((x<y && x>z)||(x>y && x<z)) {
        if(y>z){
            cout << z << " " << y;
        }
        else{
            cout << y << " " << y;
        }
    }
    else if((y<x && y>z)||(y>x && y<z)){
        if(x>z){
            cout << z << " " << x;
        }
        else{
            cout << x << " " << z;
        }
    
    }
    else {
        if(x>y){
            cout << y << " " << x;
        }
        else {
            cout << x << " " << y;
        }
        
    }
    return 0;
}
