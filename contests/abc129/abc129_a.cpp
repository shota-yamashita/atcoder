// A - Airplane
// https://atcoder.jp/contests/abc129/tasks/abc129_a

#include <iostream>
using namespace std;

int main() {
    int p, q, r; cin >> p >> q >> r;
    cout << min(min(p+q, q+r), min(q+r, r+p)) << endl;
}
