// B - Good Distance
// https://atcoder.jp/contests/abc133/tasks/abc133_b

#include <iostream>
#include <cmath>
#include <vector>
#define REP(i,n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
    int n, d; cin >> n >> d;
    vector<vector<int>> x(n, vector<int>(d)); // 二次元配列
    REP(i, n) REP(j, d) cin >> x[i][j];

    int count = 0;
    REP(i, n) {
        for(int j=i+1;j<n;j++) {
            int norm = 0;
            REP(k, d) {
                // 二点間の距離
                int diff = abs(x[i][k] - x[j][k]);
                norm += diff * diff;
            }

            bool flag = false;
            for (int k=0; k<=norm; k++) {
                if (k*k == norm) flag = true;
            }
            if (flag) ++count;
        }
    }
    cout << count << endl;
}
