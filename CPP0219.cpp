//
// Created by Hồ Nhật Tân on 6/4/26.
//
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		int A[105][105];
		int row[105] = {0};
		int col[105] = {0};
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> A[i][j];
				if (A[i][j] == 1) {
					row[i] = 1;
					col[j] = 1;
				}
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (row[i] == 1 || col[j] == 1)
					cout << 1 << " ";
				else
					cout << 0 << " ";
			}
			cout << endl;
		}
	}
	return 0;
}