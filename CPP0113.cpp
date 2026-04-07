#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        
        if (x % 100 == 86) cout << 1 << endl;
        else cout << 0 << endl;
    }
}