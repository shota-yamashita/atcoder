// B - 81
// https://atcoder.jp/contests/abc144/tasks/abc144_b

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    bool ans = false;

    for(int i=1;i<=9;i++) {
        for(int j=1;j<=9;j++) {
            if (i*j == n) ans = true;
        }
    }
    cout << ((ans) ? "Yes" : "No") << endl;
}
