#include <iostream>
#include <string>

using namespace std;

int main () {
    int n, hour, month, seconds;
    int time[99];
    int time2[99];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> hour >> month >> seconds;
        hour = hour * 3600;
        month = hour + month*60;
        seconds = month + seconds;
        time[i] = seconds;
            for (int j = i; j >= 0; j--) {
                if (i == n) {
                    break;
                }
            else if (time[i] < time[i-j]) {
                int temp = time[i-j];
                time[i-j] = time[i];
                time[i] = temp;
            }
        }
    }

    for (int i = 0; i < n*3; i+=3) {
        time2[i] = time[i/3]/3600;
        time2[i+1] = (time[i/3]%3600)/60;
        time2[i+2] = (time[i/3]%3600)%60;
    }

    for (int i = 0; i < n*3; i +=3) {
        if (i==(n*3-1)) {
            cout << time2[i] << " " << time2[i+1] << " " << time2[i+2];
        }
        else {
            cout << time2[i] << " " << time2[i+1] << " " << time2[i+2] << endl;
        }
    }
    return 0;
}