#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		long long sum = 0;
		long long num = 0;

		for (char c : s) {
			if (isdigit(c)) {
				num = num * 10 + (c - '0');
			} else {
				sum += num;
				num = 0;
			}
		}
		sum += num;
		cout << sum << '\n';
	}
}