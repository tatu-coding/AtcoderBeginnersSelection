#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    size_t pos = 0;
    int i = 0;

    while((pos = str.find("dream", pos)) != string::npos) {
        i++;
        pos += 5;
    }

    pos = 0;
    int j = 0;

    while((pos = str.find("dreamer", pos)) != string::npos) {
        j++;
        pos += 7;
    }

    pos = 0;
    int k = 0;

    while((pos = str.find("erase", pos)) != string::npos) {
        k++;
        pos += 5;
    }

    pos = 0;
    int l = 0;

    while((pos = str.find("eraser", pos)) != string::npos) {
        l++;
        pos += 6;
    }

    pos = 0;
    int m = 0;

    while((pos = str.find("dreamerase", pos)) != string::npos) {
        m++;
        pos += 10;
    }

    if(str.length() == 5 * (i - j + m) + 7 * (j - m) + 5 * (k - l) + 6 * l) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}