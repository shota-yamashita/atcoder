// A - Rainy Season
// https://atcoder.jp/contests/abc175/tasks/abc175_a

#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    bool a = s[0] == 'R';
    bool b = s[1] == 'R';
    bool c = s[2] == 'R';
    if(a and b and c) cout << 3 << endl;
    else if((a and b) or (b and c)) cout << 2 << endl;
    else if(a or b or c) cout << 1 << endl;
    else cout << 0 << endl;
}
