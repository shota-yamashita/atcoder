// A - +-x
// https://atcoder.jp/contests/abc137/tasks/abc137_a

#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    cout << max(max(a+b, a-b), max(a-b, a*b)) << endl;
}
