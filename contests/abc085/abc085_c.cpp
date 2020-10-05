// C - Otoshidama
// https://atcoder.jp/contests/abc085/tasks/abc085_c

#include <iostream>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    int cnt10000 = -1, cnt5000 = -1, cnt1000 = -1;

    for (int a=0; a<=N; a++) {
        for (int b=0; a+b<=N; b++) {
            int c = N-a-b;
            int total = 10000*a + 5000*b + 1000*c;
            if (total == Y) {
                cnt10000 = a;
                cnt5000 = b;
                cnt1000 = c;
            }
        }
    }
    cout << cnt10000 << " " << cnt5000 << " " << cnt1000 << endl;
}
