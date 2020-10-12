// A - Eating Symbols Easy
// https://atcoder.jp/contests/abc101/tasks/abc101_a

#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int count = 0;
    for(int i=0;i<s.size();i++) {
        if (s[i] == '+') count+=1;
        else count-=1;
    }
    cout << count << endl;
}
