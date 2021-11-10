#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
struct student{
  int ID;
  double grade;
};
void sort(student* a, int n){
    int g = n;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j].grade < a[j+1].grade)
            {
                a[n+1] = a[j]; // temporary 
                a[j] = a[j+1];
                a[j+1] = a[n+1];
            }
            else if (a[j].grade == a[j+1].grade)
            {
                if (a[j].ID > a[j+1].ID)
                {
                a[n+1] = a[j];
                a[j] = a[j+1];
                a[j+1] = a[n+1];
                }
            }
        }
    }
    for (int i = 0; i < g; i++){
        cout<<a[i].ID<<" "<<a[i].grade<<endl;
    }
    delete[] a;
}
int main() {
    int n;
    cin >> n;
    student* s = new student[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i].ID>>s[i].grade;
    }
    sort(s, n);      
}