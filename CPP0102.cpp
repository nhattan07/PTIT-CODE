#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--){
        char a;
        cin >> a;
        if ('a' <= a && a <= 'z') cout << char(a - 32) << endl;
        else if ('A' <= a && a <= 'Z'){
            cout << char(a + 32) << endl;
        }
    }
}