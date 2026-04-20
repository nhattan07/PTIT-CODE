#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		string letters = "";
		int sum = 0;

		for (char c : s) {
			if (isdigit(c)) sum += c - '0';
			else letters += c;
		}

		sort(letters.begin(), letters.end());

		cout << letters << sum << endl;
	}
}