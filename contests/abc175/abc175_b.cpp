// B - Making Triangle
// https://atcoder.jp/contests/abc175/tasks/abc175_b

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin >> vec[i];
    sort(vec.begin(), vec.end());

    int ans = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            for(int k=0;k<j;k++) {
                if (
                    vec[k] != vec[j] and
                    vec[i] != vec[j] and
                    vec[k] + vec[j] > vec[i]
                ) ans++;
            }
        }
    }

    cout << ans << endl;
}