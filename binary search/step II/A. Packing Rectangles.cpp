#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll w , h, n;

bool check(ll m){
	return (m / w)*(m / h) >= n;
}

void solve(){
	cin >> w >> h >> n;
	ll l = 1, r = 1;
	while(!check(r)) r *= 2;
	while(r > l + 1){
		ll m = (r + l) >> 1;
		if(check(m)) r = m;
		else l = m;
	}
	cout << r << '\n';
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
