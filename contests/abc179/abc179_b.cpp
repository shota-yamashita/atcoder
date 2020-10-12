// B - Go to Jail
// https://atcoder.jp/contests/abc179/tasks/abc179_b

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int count = 0;
    for(int i=0;i<n;i++) {
        int d1, d2; cin >> d1 >> d2;
        if(d1==d2) {
            count+=1;
        } else {
            count =0;
        }

        if(count==3) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
