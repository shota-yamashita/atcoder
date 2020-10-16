// B - Count Balls
// https://atcoder.jp/contests/abc158/tasks/abc158_b

#include <iostream>
using namespace std;
 
int main() {
    long long n, a, b; cin>>n>>a>>b;
    cout << a*(n/(a+b)) + min(a, n%(a+b));
}
