#include <bits/stdc++.h>
using namespace std;
const int c = 100;

int n, k; vector<int> a;

bool check(double m){
	int cnt = 0;
	for(int i = 0;i < n;i++)
		cnt += floor(a[i] / m);
	return cnt >= k;
}

void solve(){
	cin >> n >> k; a.resize(n);
	for(int& i : a) cin >> i;
	double l = 0, r = 1e8;
	for(int i = 0;i < c;i++){
		double m = (r + l) / 2;
		if(check(m)) l = m;
		else r = m;
	}
	cout << setprecision(8) << l << '\n';
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
} // @author: Gabriel
