//
// Created by ntan07 on 20/4/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long a[1005];

		for (int i = 0; i < n; i++) cin >> a[i];

		int l = 0, r = n - 1;
		int cnt = 0;

		while (l < r) {
			if (a[l] == a[r]) {
				l++;
				r--;
			}
			else if (a[l] < a[r]) {
				a[l + 1] += a[l];
				l++;
				cnt++;
			}
			else {
				a[r - 1] += a[r];
				r--;
				cnt++;
			}
		}

		cout << cnt << endl;
	}
}