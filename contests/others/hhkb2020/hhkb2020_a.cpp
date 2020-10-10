// A - Keyboard
// https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_a

#include <iostream>
using namespace std;

int main() {
    char s, t; cin >> s >> t;
    if(s=='Y') cout << char(toupper(t)) << endl;
    else cout << t << endl;
}
