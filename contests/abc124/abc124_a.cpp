// A - Buttons
// https://atcoder.jp/contests/abc124/tasks/abc124_a

#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int first = max(a, b);
    if (first == a) {
        cout << first + max(a-1, b) << endl;
    } else {
        cout << first + max(a, b-1) << endl;
    }
}
