// A - T or T
// https://atcoder.jp/contests/abc133/tasks/abc133_a

#include <iostream>
using namespace std;

int main() {
    int n, a, b; cin >> n >> a >> b;
    cout << min(n*a, b) << endl;
}
