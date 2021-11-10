#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    unsigned int n = 100;
    char* word = new char[n];
    cin >> word;
    n = strlen(word);
    for (int i = 0; i < n; i++)
    {
        if (isalpha(*(word+i)))
        {
            cout << *(word+i);
        }   
}
delete []word;
}