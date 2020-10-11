// C - Neq Min
// https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c

#include <iostream>
using namespace std;

int main(){
    int a; cin >> a;
    int t[210000];
    int at = 0;

    for(int i=0;i<a;i++){
        int s; cin >> s;
        t[s]++;
        while(t[at]) at++;
        cout << at << endl;
    }
}
