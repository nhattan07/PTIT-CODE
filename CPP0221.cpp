#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int a[105][105];

		// nhập
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j];

		int top = 0, bottom = n - 1;
		int left = 0, right = m - 1;

		while (top < bottom && left < right) {
			int prev = a[top + 1][left];

			// hàng trên
			for (int j = left; j <= right; j++) {
				int cur = a[top][j];
				a[top][j] = prev;
				prev = cur;
			}
			top++;

			// cột phải
			for (int i = top; i <= bottom; i++) {
				int cur = a[i][right];
				a[i][right] = prev;
				prev = cur;
			}
			right--;

			// hàng dưới
			for (int j = right; j >= left; j--) {
				int cur = a[bottom][j];
				a[bottom][j] = prev;
				prev = cur;
			}
			bottom--;

			// cột trái
			for (int i = bottom; i >= top; i--) {
				int cur = a[i][left];
				a[i][left] = prev;
				prev = cur;
			}
			left++;
		}

		// in kết quả
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << a[i][j] << " ";
		}
		cout << endl;
	}
}