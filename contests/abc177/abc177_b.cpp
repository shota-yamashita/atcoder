// B - Substring
// https://atcoder.jp/contests/abc177/tasks/abc177_b

#include <iostream>
using namespace std;
 
int main() {
    string s, t; cin >> s >> t;
    int ans = t.size();
    for (int st = 0; st <= s.size() - t.size(); st++) {
        int diff = 0;
        for (int i = 0; i < t.size(); i++) {
            if (t[i] != s[st+i]) diff++;
        }
        ans = min(ans, diff);
    }
    cout << ans << endl;
}
