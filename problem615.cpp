#include<iostream>
#include<cstring>
using namespace std; 
void print(int h[2], int m[2], int s[2]){
    int hh, mm, ss, a = 0;
    char timeh[2];
    hh = h[1] - h[0];
    mm = m[1] - m[0];
    ss = s[1] - s[0];
    if (ss < 0)
    {
        ss += 60; 
        mm--;                      
    }
    
    if (mm < 0)
    {
        mm += 60; 
        hh--;
    }
    if (hh < 0)
    {
        hh += 24;
    }
    if (hh<10)
    {
        cout<<0<<hh;
    }else{cout<<hh;}
    if (mm<10)
    {
        cout<<":"<<0<<mm;
    }else{cout<<":"<<mm;}
    if (ss<10){
        cout<<":"<<0<<ss;
    }else{cout<<":"<<ss;}
}
int main()
{
    int h[2], m[2], s[2];
    for (int i = 0; i < 2; i++)
    {
       cin >> h[i] >> m[i] >> s[i];
    }
    print(h, m, s);
}