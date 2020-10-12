// C - A x B + C
// https://atcoder.jp/contests/abc179/tasks/abc179_c

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int count = 0;
    for(int i=1;i<n;i++) {
        count += (n-1)/i; // A*B<N
    }
    cout << count << endl;
}
