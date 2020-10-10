// A - Weather Prediction
// https://atcoder.jp/contests/abc141/tasks/abc141_a

#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    if(s=="Sunny") cout << "Cloudy" << endl;
    else if(s=="Cloudy") cout << "Rainy" << endl;
    else cout << "Sunny" << endl;
}
