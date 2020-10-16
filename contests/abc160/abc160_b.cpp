// B - Golden Coins
// https://atcoder.jp/contests/abc160/tasks/abc160_b

#include <iostream>
using namespace std;

int main() {
    int x; cin >> x;
    cout << x/500*1000 + (x%500/5)*5 << endl;
}
