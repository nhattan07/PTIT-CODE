//
// Created by ntan07 on 20/4/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		string s;
		cin >> s;

		vector<long long> cnt(26, 0);

		// đếm tần suất
		for (char c : s)
			cnt[c - 'a']++;

		long long ans = 0;

		// tính kết quả
		for (int i = 0; i < 26; i++) {
			long long k = cnt[i];
			ans += k * (k + 1) / 2;
		}

		cout << ans << endl;
	}
}