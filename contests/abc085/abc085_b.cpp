// B - Kagami Mochi
// https://atcoder.jp/contests/abc085/tasks/abc085_b

#include <iostream>
#include <set>
#define REP(i, n) for (int i=1; i<=(int)(n); i++)
using namespace std;

int main() {
    int N, a[100];
    cin >> N;
    REP(i, N) cin >> a[i];

    set<int> values;
    REP(i, N) values.insert(a[i]);

    cout << values.size() << endl;
}
