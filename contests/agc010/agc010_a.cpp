// A - Addition
// https://atcoder.jp/contests/agc010/tasks/agc010_a

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0; cin >> n;
    long long a;

    while(n--){
        cin >> a; if(a%2 != 0) sum++;
    }
    cout << (sum%2 == 0 ? "YES" : "NO") << endl;
}
