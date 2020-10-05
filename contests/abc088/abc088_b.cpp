// B - Card Game for Two
// https://atcoder.jp/contests/abc088/tasks/abc088_b

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, a[100];
    cin >> N;
    for (int i=0; i<N; ++i) cin >> a[i];

    sort(a, a+N, greater<int>());

    int a_point = 0, b_point = 0;
    for (int j=0; j<N; ++j) {
        j%2 == 0 ? a_point += a[j] : b_point += a[j];
    }

    cout << a_point - b_point << endl;
}
