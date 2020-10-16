// A - One out of Three
// https://atcoder.jp/contests/abc075/tasks/abc075_a

#include <iostream>
using namespace std;

int main() {
    int a,b,c; cin>>a>>b>>c;
    if(a==b) cout << c << endl;
    else if (b==c) cout << a << endl;
    else cout << b << endl;
}
