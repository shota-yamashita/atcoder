// C - ダーツ
// https://atcoder.jp/contests/joi2008ho/tasks/joi2008ho_c

#include <iostream>
#include <vector>
#include <algorithm>
#define REP(i, n) for (int i=0;i<=(int)(n); i++)
using namespace std;

int main() {
    int n, m, p[1000];
    cin >> n >> m;
    for (int i=1; i<=n; i++) cin>>p[i];

    // 1回目・2回目の組み合わせのリストを作成する
    vector<int> vec;
    REP(i, n+1)
        REP(j, n+1)
            vec.push_back(p[i] + p[j]);
    sort(vec.begin(), vec.end());

    int ans = 0;
    REP(i, vec.size()) {
        int num = m - vec[i];
        if (num < 0) continue;
        int num2 = upper_bound(vec.begin(), vec.end(), num) - 1 - vec.begin();
        ans = max(vec[i] + vec[num2], ans);
    }

    cout << ans << endl;
}
