#include <bits/stdc++.h>
#define sort(a) sort(a.begin(),a.end())
using namespace std;

void solve(){
	int n, k; cin >> n;
	vector<int> a(n), answer;
	for(int& i : a) cin >> i;
	sort(a); cin >> k;
	for(int i = 0;i < k;i++){
		int left, right, x = 0; cin >> left >> right;
		int l = -1, r = n;
		while(r > l + 1){
			int m = (r + l) >> 1;
			if(a[m] <= right) l = m;
			else r = m;
		}
		x += l;
		l = -1, r = n;
		while(r > l + 1){
			int m = (r + l) >> 1;
			if(a[m] < left) l = m;
			else r = m;
		}
		x -= l;
		answer.push_back(x);
	}
	for(int& i : answer) cout << i << " ";
	cout << '\n';
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
} // @author: Gabriel
