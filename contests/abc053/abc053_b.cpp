// B - A to Z String
// https://atcoder.jp/contests/abc053/tasks/abc053_b

#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a = s.find_first_of("A");
    int z = s.find_last_of("Z");
    cout << z-a+1 << endl;
}
