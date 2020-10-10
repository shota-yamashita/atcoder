// B - Shift only
// https://atcoder.jp/contests/abc081/tasks/abc081_b

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[200];
    int dmin = 100;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        int d = 0;
        while (a[i]%2 == 0) {
            a[i] /= 2;
            ++d;
        }
        dmin = min(dmin, d);
    }
    cout << dmin << endl;
}
