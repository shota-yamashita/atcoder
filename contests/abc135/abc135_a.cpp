// A - Harmony
// https://atcoder.jp/contests/abc135/tasks/abc135_a

#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;

    for(int k=0;k<=1000000000;k++) {
        if((abs(a-k)) == abs(b-k)) {
            cout << k << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
