// D - Handstand 2
// https://atcoder.jp/contests/abc152/tasks/abc152_d

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;

    map<pair<char, char>, int> binary_pairs;
    for(int i=1;i<=n;i++) {
        binary_pairs[{to_string(i).front(), to_string(i).back()}]++;
    }

    int count=0;
    for(int i=1;i<=n;i++) {
        count += binary_pairs[{to_string(i).back(), to_string(i).front()}];
    }

    cout << count << endl;
}
