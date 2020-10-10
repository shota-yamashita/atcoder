// B - Futon
// https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_b

#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    string s[110];
    int count=0;

    for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i>0) if(s[i-1][j]=='.' && s[i][j]=='.') count++;
			if(j>0) if(s[i][j-1]=='.' && s[i][j]=='.') count++;
		}
	}
    cout << count << endl;
}
