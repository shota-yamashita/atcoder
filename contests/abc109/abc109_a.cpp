// A - ABC333
// https://atcoder.jp/contests/abc109/tasks/abc109_a

#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    for(int c=1;c<=3;c++) {
        if(a*b*c%2==0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
