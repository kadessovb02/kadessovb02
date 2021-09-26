#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int y, y1, SimpleYear, LeapYear, days, remDays, answer, delta = 0;
    static int i, j;
    SimpleYear = 365;
    LeapYear = 366;
    cin>>y;
    y1 = 1;
    int one = 1;
    if(y%400 ==0){
        cout<<1;
    }
    else{
if((y%4==0)&&(y%100!=0)||(y%400 == 0)){
        delta++;
    }
         do{
            if((y1%4==0)&&(y1%100!=0)||(y1%400 == 0)){
            j++; // leap years
            }
            else{
            i++; // simple years
            }
         y1 = i + j;
        }
        while( y1 != y);
    days = j*LeapYear + i*SimpleYear; 
    remDays = days%7;
    answer = 8-remDays;
    int d1 = remDays - delta;
    if(d1 == 0){
        cout <<7;
    }
    else{
        cout<<(answer-delta);
    }
    }
    }
    
// FINAL
// 
