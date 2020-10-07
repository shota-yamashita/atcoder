// B - OddString
// https://atcoder.jp/contests/abc072/tasks/abc072_b

#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    for(int i=0;i<s.length();i+=2) cout << s[i];
}
