//
// Created by ntan07 on 6/4/2026.
//
#include <bits/stdc++.h>
using namespace std;
int so_be_nhat(int m, int s) {
	int temp;
	if (s < 9 && m < 2) return 0;
	else {
		temp = s - 9;
	}
}
int so_lon_nhat(int m, int s) {

}
int main() {
	int m, s; cin >> m >> s;
	if (!so_be_nhat(m, s) || !so_lon_nhat(m, s)) cout << "-1 -1";

}