// B - Distance
// https://atcoder.jp/contests/abc174/tasks/abc174_b

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, d; cin >> n >> d;
    int count = 0;

    for(int i=1; i<=n; i++) {
        double x, y; cin >> x >> y;
        if (sqrt(x*x + y*y) <= d) count++;
    }

    cout << count << endl;
}
