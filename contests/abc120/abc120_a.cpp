// A - Favorite Sound
// https://atcoder.jp/contests/abc120/tasks/abc120_a

#include <iostream>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    int n = b/a;
    cout << (n<c ? n : c) << endl;
}
