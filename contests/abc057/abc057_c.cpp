// C - Digits in Multiplication
// https://atcoder.jp/contests/abc057/tasks/abc057_c

#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;

int main() {
    ll n, ans; cin >> n;
    for(int i=1;i<=sqrt(n);i++) {
        if (n%i == 0) {
            ans = min(ans, (ll)to_string(n/i).size());
        }
    }
    cout << ans << endl;
}
