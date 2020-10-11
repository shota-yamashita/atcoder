// B - Balance
// https://atcoder.jp/contests/abc129/tasks/abc129_b

#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for (int i=0; i<(n); i++) 
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;

    rep(i, n) {
        cin >> a[i]; sum+= a[i];
    }

    int b=0, ans=1e9;
    rep(i, n-1) {
        b += a[i];
        ans = min(ans, abs(sum-b-b)); // 全体から和を引く
    }
    cout << ans << endl;
}
