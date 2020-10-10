// A - Can't Wait for Holiday
// https://atcoder.jp/contests/abc146/tasks/abc146_a

#include <iostream>
using namespace std;

int main() {
    string days[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    string s; cin >> s;
    for(int i=0;i<=6;i++) {
        if(s == days[i]) cout << 7-i << endl;
    }
}
