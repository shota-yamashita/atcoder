// A - Five Antennas
// https://atcoder.jp/contests/abc123/tasks/abc123_a

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    int k; cin >> k;
    if(e-a<=k) cout << "Yay!" << endl;
    else cout << ":(" <<endl;
}
