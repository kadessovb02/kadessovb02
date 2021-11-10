#include<iostream>
#include<cstring>
using namespace std; 
bool compare(char* s1, int size1, char* s2, int size2){
    bool ans = true;
    for (int i = 0; i < size1; i++)
    {
        if ((s1[i] != s2[i]) || (size1 != size2))
        {
            ans = false;
            break;
        }
    }
    return ans;
}
int main()
{
    char* s1 = new char[100];
    cin >> s1;
    int size1 = strlen(s1); 
    char* s2 = new char[100];
    cin >> s2;
    int size2 = strlen(s2);
    if(compare(s1, size1, s2, size2) == true){
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    delete[] s1; 
    delete[] s2;
}