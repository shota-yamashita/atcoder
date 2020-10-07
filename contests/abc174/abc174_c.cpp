// C - Repsept
// https://atcoder.jp/contests/abc174/tasks/abc174_c

#include <iostream>
using namespace std;

int main() {
    int n, s=0; cin >> n;
    for(int i=1;i<=1e7;i++) {
        s = (s*10+7) % n; // 7, 77, 777, ...をnで割った余り
        if (s == 0) { cout << i; return 0; }
    }
    cout << -1 << endl;
}
