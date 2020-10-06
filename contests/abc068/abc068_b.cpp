// B - Break Number
// https://atcoder.jp/contests/abc068/tasks/abc068_b

#include <iostream>
using namespace std;

int main() {
    int n, ans=1;
    cin >> n;

    while(ans<=n) ans *= 2;
    cout << ans/2 << endl;
}
