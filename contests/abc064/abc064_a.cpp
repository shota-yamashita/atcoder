// A - RGB Cards
// https://atcoder.jp/contests/abc064/tasks/abc064_a

#include <iostream>
using namespace std;

int main() {
    int r, g, b;
    cin >> r >> g >> b;
    if ((r*100 + b*10 + b)%4 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
