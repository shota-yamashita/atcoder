// A - Coffee
// https://atcoder.jp/contests/abc160/tasks/abc160_a

#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    if(s[2]==s[3] && s[4]==s[5]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
