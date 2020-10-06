// B - Two Anagrams
// https://atcoder.jp/contests/abc082/tasks/abc082_b

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s; cin >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());

    if(s<t) cout << "Yes" << endl;
    else cout << "No" << endl;
}
