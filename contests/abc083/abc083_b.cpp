// B - Some Sums
// https://atcoder.jp/contests/abc083/tasks/abc083_b

#include <iostream>
using namespace std;

int main() {
    int N, A, B, count=0;
    cin >> N >> A >> B;

    for (int i=1; i<=N; i++) {
        int tmp = 0;
        for (int j=i; j>0; j/=10) {
            tmp += j%10;
        }
        if (A <= tmp && tmp <= B) { count += i; }
    }

    cout << count << endl;
}
