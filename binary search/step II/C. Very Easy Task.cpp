#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll n, x, y;

bool check(ll m){
	if(m < min(x,y)) return false;
	m -= min(x,y);
	return (m / x) + (m / y) + 1 >= n;
}

void solve(){
  	cin >> n >> x >> y;
  	ll l = 0, r = max(x,y)*n;
 	while(r > l + 1){
    		ll m = (r + l) >> 1;
    		if(check(m)) r = m;
    		else l = m;
  	}
  	cout << r << '\n';
}

int main() {
  	cin.tie(0); cout.tie(0);
	cout.sync_with_stdio(0);
  	solve();
  	return 0;
}
