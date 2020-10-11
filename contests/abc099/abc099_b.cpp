// B - Stone Monument
// https://atcoder.jp/contests/abc099/tasks/abc099_b

#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    cout << (b-a)*(b-a+1)/2-b << endl;
}
