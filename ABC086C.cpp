#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    int time[num + 1];
    int x[num + 1];
    int y[num + 1];

    time[0] = 0;
    x[0] = 0;
    y[0] = 0;

    bool found = true;

    for (int i = 1; i < num + 1; i++) {
        cin >> time[i] >> x[i] >> y[i];

        int time_dif = time[i] - time[i-1];
        int dis = abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]);
        
        if (dis <= time_dif && (dis - time_dif) % 2 == 0) {
            found = true;
        } else {
            found = false;
            break;
        }
    }

    if (found == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}