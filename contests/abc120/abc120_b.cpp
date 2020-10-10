// B - K-th Common Divisor
// https://atcoder.jp/contests/abc120/tasks/abc120_b

#include <iostream>
using namespace std;

int main() {
    int a, b, k; cin >> a >> b >> k;
    int count;
    for(int i=min(a, b); i>=1; i--) {
        if ((a%i==0) && (b%i==0)) count++;
        if (count == k) {
            cout << i << endl;
            return 0;
        }
    }
}
