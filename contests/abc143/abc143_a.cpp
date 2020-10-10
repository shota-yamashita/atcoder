// A - Curtain
// https://atcoder.jp/contests/abc143/tasks/abc143_a

#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int n = a - 2*b;
    if (n>0) cout << n << endl;
    else cout << 0 << endl;
}
