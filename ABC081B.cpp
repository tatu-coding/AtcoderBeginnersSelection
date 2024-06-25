#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    int a[num];

    for(int i = 0; i < num; i++) {
        cin >> a[i];
    }

    int count = 0;
    bool all_even = true;
    
    while(all_even) {

        for(int i = 0; i < num; i++) {
            if(a[i]%2 != 0) {
                all_even = false;
                break;
            }
            a[i] = a[i]/2;
        }

        if(!all_even) {
            break;
        }
        
        count++;
    }

    cout << count << endl;
}