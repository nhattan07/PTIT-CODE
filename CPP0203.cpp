//
// Created by ntan07 on 27/3/2026.
//
#include <bits/stdc++.h>
using namespace std;
int lonNhat(int n, int arr[]) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > temp) {
            temp = arr[i];
        }
    }
    return temp;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int temp = lonNhat(n, arr);
        int c = 0;
        for (int i = 1; i < temp; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (i == arr[j]) {
                    count++;
                    c++;
                }
            }
            if (c + 1 == n) cout << n + 1 << endl;
            else if (count == 0) {
                cout << i << endl;
                break;
            }
        }
    }
}