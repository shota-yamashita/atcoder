// A - Odds of Oddness
// https://atcoder.jp/contests/abc142/tasks/abc142_a

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    int odds = ceil((double)n/2);
    cout << ((double)odds/(double)(n));
}
