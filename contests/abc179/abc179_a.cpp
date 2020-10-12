// A - Plural Form
// https://atcoder.jp/contests/abc179/tasks/abc179_a

#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    if(s[s.length()-1]=='s') cout << s+"es" << endl;
    else cout << s+'s' << endl;
}
