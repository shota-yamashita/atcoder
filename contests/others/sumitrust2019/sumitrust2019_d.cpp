// D - Lucky PIN
// https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_d

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int count = 0;
    string s; cin >> s;

    for(int i=0; i<1000; i++) {
        int a[3] { i/100, (i/10) % 10, i % 10}; // 暗証番号
        int digit = 0;
        for(int j=0; j<n; j++) {
            if(digit <= 2 && a[digit] == (int)(s[j] - '0')) digit++;

        }
        if (digit == 3) count += 1;
    }
    cout << count << endl;
}
