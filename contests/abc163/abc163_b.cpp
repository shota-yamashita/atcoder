// B - Homework
// https://atcoder.jp/contests/abc163/tasks/abc163_b

#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int count = 0;
    for(int i=1;i<=m;i++) {
        int a; cin >> a;
        count += a;
    }
    if(count<=n) cout << n - count << endl;
    else cout << -1 << endl;
}
