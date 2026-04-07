//
// Created by ntan07 on 27/3/2026.
//
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int start = 1;
    for (int i = 1; i < N; i++) start *= 10;
    int end = start * 10;
    int count = 0;
    for (int i = start; i < end; i++) {
        int x = i;
        int chan = 0, le = 0;
        while (x > 0) {
            int d = x % 10;
            if (d % 2 == 0) chan++;
            else le++;
            x /= 10;
        }
        if (chan == le) {
            cout << i << " ";
            count++;
            if (count % 10 == 0) cout << endl;
        }
    }
    return 0;
}