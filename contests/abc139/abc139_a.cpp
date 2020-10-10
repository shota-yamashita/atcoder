// A - Tenki
// https://atcoder.jp/contests/abc139/tasks/abc139_a

#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    string t; cin >> t;
    int count = 0;
    for(int i=0;i<=2;i++) if(s[i]==t[i]) count++;
    cout << count << endl;
}
