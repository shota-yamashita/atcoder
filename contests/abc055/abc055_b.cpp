// B - Training Camp
// https://atcoder.jp/contests/abc055/tasks/abc055_b

#include <iostream>
#define ll long long 
using namespace std;

int main() {
    int n, sum=1; cin >> n;
    for(ll i=1;i<=n;i++) sum = sum * i % 1000000007;
    cout << sum << endl;
}
