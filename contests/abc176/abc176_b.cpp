// B - Multiple of 9
// https://atcoder.jp/contests/abc176/tasks/abc176_b

#include <iostream>
using namespace std;
 
int main() {
    string s; cin >> s;
    int sum = 0;
    for(int i=0;i<s.size();i++) sum += s[i]-'0';
    if(sum%9==0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
