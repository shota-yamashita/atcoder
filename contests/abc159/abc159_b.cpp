// B - String Palindrome
// https://atcoder.jp/contests/abc159/tasks/abc159_b

#include <iostream>
#include <string>
using namespace std;

string rv(string s){
    reverse(s.begin(),s.end());
    return s;
}

int main(void){
    string s, a, b; cin>>s;
    int n = s.size();

    for(int i=1; i<=(n-1)/2; ++i) a+=s[i-1]; // 前半
    for(int i=(n+3)/2; i<=n; ++i) b+=s[i-1]; // 後半
    if(s==rv(s) && a==rv(a) && b==rv(b)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
