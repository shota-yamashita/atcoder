// A - Add Sub Mul
// https://atcoder.jp/contests/abc098/tasks/abc098_a

#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    cout << max(max(a+b, a-b), max(a-b, a*b)) << endl;
}
