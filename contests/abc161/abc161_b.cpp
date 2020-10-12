// B - Homework
// https://atcoder.jp/contests/abc163/tasks/abc163_b

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[1000], sum=0;
    for(int i=0;i<n;i++) {
        cin >> a[i]; sum += a[i];
    }
    sort(a, a+n, greater<int>());
    if(a[m-1]*4*m<sum) cout << "No" << endl;
    else cout << "Yes" << endl; 
}
