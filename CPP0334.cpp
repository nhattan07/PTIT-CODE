//
// Created by ntan07 on 6/4/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	vector<string> v;
	string a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int x : a[i]) {
			if (a[i][x] >= 'a' && a[i][x] <= 'z') continue;
			while (a[i][x] >= '0' && a[i][x] <= '9') {
				if (a[i][x + 1] >= '0' && a[i][x + 1] <= '9') {
					a[i][x] = a[i][x] + a[i][x + 1];
				}

			}
		}
	}
}