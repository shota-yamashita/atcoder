// A - Infinite Coins
// https://atcoder.jp/contests/abc088/tasks/abc088_a

#include <iostream>
using namespace std;

int main() {
    int N, A;
    cin >> N; cin >> A;
    
    if ((N % 500 - A) <= 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
