// B - Palace
// https://atcoder.jp/contests/abc113/tasks/abc113_b

#include <iostream>
using namespace std;

int main() {
    int n, t, a, h, ans;
    cin >> n;
    cin >> t >> a;
    double tmp = 100000; // 値は適当で良い
    for (int i=1; i<=n; i++) {
        cin >> h;
        float at = abs(t-h*0.006-a);
        if (tmp >= at) {
            tmp = at;
            ans = i;
        }
    }
    cout << ans << endl;
}
