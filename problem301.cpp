#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c; // vars declaration
	cin>>a>>b>>c;
    if(a<=b && b<=c){ // condition, that compares 3 numbers
        cout<<(2*a)<<endl<<(2*b)<<endl<<(2*c)<<endl;
    }
    else{
        cout<<(sqrt(a*a))<<endl<<(sqrt(b*b))<<endl<<(sqrt(c*c)); // founds square, if vars located randomly
    }
	return 0;
}
