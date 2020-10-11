// B - String Palindrome
// https://atcoder.jp/contests/abc159/tasks/abc159_b

#include <iostream>
using namespace std;

int main(void) {
    int n; cin >> n;
    int a = 2025 - n; // 2025; 九九の合計
    for(int i=1;i<=9;i++) {
        for(int j=1;j<=9;j++) {
            if (i*j==a) cout << i << " x " << j << endl;
        }
    }
}
