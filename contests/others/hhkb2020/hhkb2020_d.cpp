// D - Squares
// https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_d

#include <iostream>
typedef long long ll;
const ll MOD =1e9+7;
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        ll n, a, b; cin >> n >> a >> b;
        if (a+b>n) cout << 0 << endl;
        else {
            ll red = n-a+1, blue = n-b+1;
            ll ans = red*red%MOD*blue %MOD*blue%MOD;
            ll sub = (n-a+1)*(n-b+1)%MOD-(n-a-b+2)*(n-a-b+1)%MOD;
            cout << (MOD+ans-sub*sub%MOD)%MOD << endl;
        }
    }
}
