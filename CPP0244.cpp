//
// Created by Hồ Nhật Tân on 6/4/26.
//
#include <iostream>
#include <set>
using namespace std;
int main() {
	int n; cin >> n;
	set <int> c;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		c.insert(x);
	}
	for (int x : c) cout << x << " ";
}