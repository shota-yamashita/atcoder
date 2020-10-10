// A - Fifty-Fifty
// https://atcoder.jp/contests/abc132/tasks/abc132_a

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s; cin >> s;
    sort(s.begin(), s.end());
    if (s[0]==s[1] && s[2]==s[3] && s[1]!=s[2]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
