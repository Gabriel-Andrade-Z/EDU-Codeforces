#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for(int& i : a) cin >> i;
	for(int i = 0;i < k;i++){
		int x; bool flag = false; cin >> x;
		int l = 0, r = n - 1;
		while(r >= l){
			int m = (r + l) >> 1;
			if(a[m] == x) { flag = true; break; }
			else if(a[m] < x) l = m + 1;
			else r = m - 1;
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
} // @author: Gabriel
