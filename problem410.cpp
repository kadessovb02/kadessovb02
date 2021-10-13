    #include <iostream>
    using namespace std;
    int main() {
    int n;
    string ans;
    cin >> n; 
    if (n == 2)
    {
        ans = "YES";
    }
    else{
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            ans = "NO";
            break;
        }
        else{
            ans = "YES";
        }
    }
    }
    cout<<ans;
    }