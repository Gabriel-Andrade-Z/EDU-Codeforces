#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for(int& i : a) cin >> i;
	for(int i = 0;i < k;i++){
		int x; cin >> x;
		int l = -1, r = n;
		while(r > l + 1){
			int m = (r + l) >> 1;
			if(a[m] < x) l = m;
			else r = m;
		}
		cout << r + 1 << '\n';
	}
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
} // @author: Gabriel
