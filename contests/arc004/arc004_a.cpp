// A - 2点間距離の最大値 ( The longest distance )
// https://atcoder.jp/contests/arc004/tasks/arc004_1

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    int a[105], b[105];
    for (int i=0;i<n;i++) {
        cin >> a[i] >> b[i];
    }

    double t = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            double dist = sqrt((a[i]-a[j])*(a[i]-a[j]) + (b[i]-b[j])*(b[i]-b[j]));
            t = max(t, dist);
        }
    }

    cout << t << endl;
}
