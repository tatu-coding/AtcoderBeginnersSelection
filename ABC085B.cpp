#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int d[n];

    for(int i = 0; i < n; i++) {
        cin >> d[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if (d[i] == d[j]) {
                d[j] = 0;
            }
        }
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(d[i] != 0) {
            count++;
        }
    }

    cout << count << endl;
}