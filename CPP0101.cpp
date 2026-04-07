//
// Created by ntan07 on 20/3/2026.
//
#include <iostream>
using namespace std;

long long tong(long long n) {
    return n * (n + 1) / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << tong(n) << endl;
    }
}