// C - Low Elements
// https://atcoder.jp/contests/abc152/tasks/abc152_c

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int count = 0;
    int m = n + 1; // M(i) := min{P(j)|1<=j<=i}
    int a; // tmp
    for(int i=1;i<=n;i++) {
        cin >> a;
        if(m>a) {
            count++;
            m = a;
        }
    }
    cout << count << endl;
}
