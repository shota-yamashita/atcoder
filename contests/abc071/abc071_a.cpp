// A - Meal Delivery
// https://atcoder.jp/contests/abc071/tasks/abc071_a

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, a, b; cin>>x>>a>>b;
    int s = abs(x-a), t = abs(x-b);
    if(s<t) cout << "A" << endl;
    else cout << "B" << endl;
}
