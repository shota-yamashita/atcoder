// B - Bitter Alchemy
// https://atcoder.jp/contests/abc095/tasks/abc095_b

#include <iostream>
using namespace std;

int main() {
    int n, x, t=1e9;
    cin >> n >> x;

    int m;
    while(cin >> m) {
       t = min(t, m);
       x -= m;
    }
    cout << n+x/t << endl;
}
