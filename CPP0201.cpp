#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			a.push_back(x);
		}
		int min_val = INT_MAX;
		sort(a.begin(), a.end());
		for (int i = 1; i < n; i++) {
			min_val = min(min_val, a[i] - a[i - 1]);
		}
		cout << min_val << endl;
	}
}