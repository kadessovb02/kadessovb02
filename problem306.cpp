#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
   int a; // var declaration
   cin>>a;
   if ((a%4==0)&&(a%100!=0)||a%400 == 0){ // condition for leap year
       cout<<"366"; // days in leap year
   }
   else{
       cout<<"365"; // days in simple year
   }
}