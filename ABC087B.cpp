#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int x;
    cin >> x;

    int total = 0;
    int count = 0;

    for(int i = 0; i <= a; i++) {
        for(int j = 0; j <= b; j++) {
            for(int k = 0; k <= c; k++) {

                total = 500 * i + 100 * j + 50 * k;

                if (total == x) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}