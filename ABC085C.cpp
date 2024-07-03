#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int money;
    cin >> money;

    bool found = false;

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n - i; j++) {
            int k = n - i - j;
            if (money == i * 10000 + j * 5000 + k * 1000) {
                cout << i << " " << j << " " << k << endl;
                found = true;
                break;
            }           
        }
        if (found == true) {
            break;
        }
    }

    if (found != true) {
        cout << "-1 -1 -1" << endl;
    }
}