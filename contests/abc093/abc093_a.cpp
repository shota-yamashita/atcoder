// A - abc of ABC
// https://atcoder.jp/contests/abc093/tasks/abc093_a

#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    string s; cin >> s;
    sort(s.begin(), s.end());

    if(s=="abc") cout << "Yes" << endl;
    else cout << "No" << endl;
}