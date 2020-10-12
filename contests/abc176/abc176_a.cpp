// A - Takoyaki
// https://atcoder.jp/contests/abc176/tasks/abc176_a

#include <iostream>
using namespace std;

int main() {
    int n, x, t; cin >> n >> x >> t;
    cout << (n+x-1)/x*t << endl;
}
