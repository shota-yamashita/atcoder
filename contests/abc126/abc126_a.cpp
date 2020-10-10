// A - Changing a Character
// https://atcoder.jp/contests/abc126/tasks/abc126_a

#include <iostream>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    s[k-1] = tolower(s[k-1]);
    cout << s << endl; 
}
