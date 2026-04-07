//
// Created by ntan07 on 6/4/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
	string name; getline(cin, name);
	string date; getline(cin, date);
	float mon1,mon2, mon3;
	cin >> mon1 >> mon2 >> mon3;
	float tong = mon1 + mon2 + mon3;
	cout << name << " " << date << " ";
	cout << fixed << setprecision(1) << tong;
}