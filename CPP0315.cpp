#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--) {
		string s;
		cin >> s;

		int n = s.size();
		int i;

		// 1. tìm vị trí giảm đầu tiên từ phải
		for (i = n - 2; i >= 0; i--) {
			if (s[i] > s[i + 1])
				break;
		}

		if (i < 0) {
			cout << -1 << '\n';
			continue;
		}

		// 2. tìm phần tử lớn nhất < s[i]
		int pos = -1;
		for (int j = n - 1; j > i; j--) {
			if (s[j] < s[i]) {
				if (pos == -1 || s[j] >= s[pos])
					pos = j;
			}
		}

		// tránh duplicate phía trước
		while (pos - 1 > i && s[pos] == s[pos - 1])
			pos--;

		// 3. swap
		swap(s[i], s[pos]);

		cout << s << '\n';
	}
}