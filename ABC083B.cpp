#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    int a, b;
    cin >> a >> b;

    int sum = 0;

    for (int i = 0; i <= num; i++) {
        string str;
        str = to_string(i);

        int str_total = 0;

        for (int j = 0; j < str.length(); j++) {
            str[j] = str[j] - '0';

            str_total += str[j];
        }

        if (str_total >= a && str_total <= b) {
            sum += i;
        } 
    }

    cout << sum << endl;
}