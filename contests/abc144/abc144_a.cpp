// A - 9x9
// https://atcoder.jp/contests/abc144/tasks/abc144_a

#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    if(a<=9 && b<=9) cout << a * b << endl;
    else cout << -1 << endl;
}
