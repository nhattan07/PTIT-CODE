#include <bits/stdc++.h>
using namespace std;

int main() {
	string name, gender, birth, address, tax, contract;

	getline(cin, name);
	getline(cin, gender);
	getline(cin, birth);
	getline(cin, address);
	getline(cin, tax);
	getline(cin, contract);

	cout << "00001 " << name << " " << gender << " "
		 << birth << " " << address << " "
		 << tax << " " << contract;

	return 0;
}