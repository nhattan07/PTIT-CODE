//
// Created by ntan07 on 6/4/2026.
//
#include <bits/stdc++.h>
#include <set>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		set<int> s;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			if (x == 0) s.insert(0);
			while (x > 0) {
				s.insert(x % 10);
				x /= 10;
			}
		}
		for (int x : s) cout << x << " ";
		cout << endl;
	}
}