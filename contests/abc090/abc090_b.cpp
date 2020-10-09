// B - Palindromic Numbers
// https://atcoder.jp/contests/abc090/tasks/abc090_b

#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int count = 0;

    for(int i=a;i<=b;i++) {
        string n = to_string(i);
        if ((n[0] == n[4]) && (n[1] == n[3])) count++;
    }

    cout << count << endl;
}
