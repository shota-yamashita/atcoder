// B - Shift only
// https://atcoder.jp/contests/abc081/tasks/abc081_b

#include <iostream>

using namespace std;

int main() {
    int N;
    int A[10000];

    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    int count = 0;
    bool exist_odd = false;

    while (true) {
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) exist_odd = true;
        }

        if (exist_odd) break;

        for (int i = 0; i < N; i++) A[i] /= 2;
        count++;
    }

    cout << count << endl;
}
