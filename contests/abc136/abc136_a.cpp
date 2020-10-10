// A - Transfer
// https://atcoder.jp/contests/abc136/tasks/abc136_a

#include <iostream>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    int n = c-(a-b);
    if (n>=0) cout << n << endl;
    else cout << 0 << endl;
}
