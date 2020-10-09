// C - Welcome to AtCoder
// https://atcoder.jp/contests/abc151/tasks/abc151_c

#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int ac[110000], wa[110000];
    for(int i=1;i<=n;i++) {
        ac[i] = false; wa[i] = 0; // 初期化
    }

    int ac_num = 0, wa_num = 0;
    while(m--) {
        int p; string s;
        cin >> p >> s;
        if (ac[p]) continue;
        if (s == "AC") {
            ac[p] = true;
            ac_num++;
            wa_num += wa[p];
        } else if (s == "WA") { 
            wa[p]++;
        }
    }

    cout << ac_num << " " << wa_num << endl;
}
