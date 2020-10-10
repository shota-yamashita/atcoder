// A - Blackjack
// https://atcoder.jp/contests/abc147/tasks/abc147_a

#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3; cin >> a1 >> a2 >> a3;
    int sum = a1 + a2 + a3;
    if (22 <= sum) cout << "bust" << endl;
    else cout << "win" << endl;
}
