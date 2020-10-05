// C - 白昼夢
// https://atcoder.jp/contests/abc049/tasks/arc065_a

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
  
    string word = "";
    for (int i = 0; i < S.size(); i++) {
        word += S.at(i);
        if (word == "maerd") word = "";
        else if (word == "remaerd") word = "";
        else if (word == "esare") word = "";
        else if (word == "resare") word = "";
    }
  
    if (word == "") cout << "YES" << endl;
    else cout << "NO" << endl;
}
