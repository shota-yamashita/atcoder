// A - Digits Sum
// https://atcoder.jp/contests/agc025/tasks/agc025_a

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if (sum == 1) cout << 10 << endl;
    else cout << sum << endl;
}
