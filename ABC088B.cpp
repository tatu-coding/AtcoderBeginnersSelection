#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    int a[num];
    int b;

    for (int i = 0; i < num; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < num - 1; i++) {
        for (int j = i + 1; j <  num; j++) {
            if (a[i] < a[j]) {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }

    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < num; i++) {
        if (i%2 == 0) {
            sum1 += a[i];
        } else {
            sum2 += a[i];
        }
    }

    if (sum1 > sum2) {
        cout << sum1 - sum2 << endl;
    } else {
        cout << sum2 - sum1 << endl;
    }
}