// B - Kagami Mochi
// https://atcoder.jp/contests/abc085/tasks/abc085_b

#include <iostream>
#include <set>
using namespace std;

int main() {
    int N, a[100];
    cin >> N;
    for(int i=0; i<N; i++) cin >> a[i];

    set<int> values;
    for(int i=0; i<N; i++) values.insert(a[i]);

    cout << values.size() << endl;
}
