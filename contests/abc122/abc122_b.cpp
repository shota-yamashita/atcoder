// B - ATCoder
// https://atcoder.jp/contests/abc122/tasks/abc122_b

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; cin >> s;
    int count = 0, ans = 0;
    for(int i=0;i<=s.size();i++) {
        if(s[i]=='A'||s[i]=='T'||s[i]=='G'||s[i]=='C') count++;
        else count = 0;
        ans = max(ans, count);
    }
    cout << ans << endl;
}
