#include<iostream>
#include<cmath>
int min = 100;
int seq(int a){
        if(a < min) {
            min = a;
        }  

    return min;
}
int main()
{
    int b[4];
    for (int i = 0; i < 4; i++)
    {
    std::cin>>b[i];
    min = seq(b[i]);
    }
    std::cout<<min;
}