// C - Step
// https://atcoder.jp/contests/abc176/tasks/abc176_c

#include <iostream>
using namespace std;
 
int main() {
    int n; cin>>n;
    int max=0,a=0;
    long long ans=0;
    while (cin>>a) {
        if (max<=a) max=a;
        else ans+=max-a;
    }
    cout<<ans<<endl;
}
