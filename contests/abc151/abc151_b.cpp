// B - Achieve the Goal
// https://atcoder.jp/contests/abc151/tasks/abc151_b

#include <iostream>
using namespace std;

int main() {
    int n, k, m; cin >> n >> k >> m;
    int temp = 0, ans;

    for(int i=1; i<n; i++) {
        int a; cin >> a;
        temp += a;
    }

    ans = (m * n) - temp;
    if (ans <= k) cout << max(0, ans) << endl;
    else cout << "-1" << endl;
}
