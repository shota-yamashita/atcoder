// B - Product Max
// https://atcoder.jp/contests/abc178/tasks/abc178_b

#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d; cin >> a >> b >> c >> d;
    cout << max(max(a*c,a*d), max(b*c,b*d)) << endl;
}
