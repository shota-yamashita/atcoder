// A - AtCoder Crackers
// https://atcoder.jp/contests/abc105/tasks/abc105_a

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for(int i=n;i<=1e10;i++) {
        if ((i%2==0) && (i%n==0)) {
            cout << i << endl;
            return 0;
        }
    }
}
