// B - Common Raccoon vs Monster
// https://atcoder.jp/contests/abc153/tasks/abc153_b

#include <iostream>
using namespace std;

int main() {
    int h, n; cin >> h >> n;
    for(int i=0;i<n;i++) {
        int a; cin >> a;
        h -= a;
    }
    if(h<=0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
