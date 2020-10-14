// A - Cats and Dogs
// https://atcoder.jp/contests/abc094/tasks/abc094_a

#include <iostream>
using namespace std;
 
int main() {
    int a, b, x; cin >> a >> b >> x;
    if(a<=x && x<=a+b) cout << "YES" << endl;
    else cout << "NO" << endl;
}
