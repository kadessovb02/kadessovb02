#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
   int d, m, y; // var declaration
    cin>>d>>m>>y;
        if (m<=12 && m>0){
            if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){ // months, where 31 days
                if(d<=31){  // condition
                    cout<<"yes";
                }
                else{
                    cout<<"no";
                }
       }
       else if(m = 2){ // month, where could be 28 or 29 days
            if((y%4==0)&&(y%100!=0)||y%400 == 0){  // condition for leap year
                if(d<=29){
                        cout<<"yes";
                    }
                    else{
                        cout<<"no";
                    }
                }
            else{
                    if(d<=28){
                        cout<<"yes";
                    }
                    else{
                        cout<<"no";
                    }
                }
       }
        else { // other months, where 30 days
                 if(d<=30) { 
               cout<<"yes";
           }
           else{
               cout<<"no";
           }
        }
       }
   
    else
    {
          cout<<"no";
    }   
}

