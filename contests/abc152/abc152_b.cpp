// B - Comparing Strings
// https://atcoder.jp/contests/abc152/tasks/abc152_b

#include <iostream>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    for(int i=1; i<=max(a,b); i++) cout << min(a,b);
}
