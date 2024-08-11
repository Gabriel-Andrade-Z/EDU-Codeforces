#include <bits/stdc++.h>
using namespace std;
const int k = 100;

double c, l = 0, r = 1e10;

bool check(double m){
	double s = pow(m,2) + pow(m,0.5) - c;
  	double f = pow(r,2) + pow(r,0.5) - c;
  	if(s * f > 0) return true;
  	return false;
}

void solve(){
 	cin >> c;
  	for(int i = 0;i < k;i++){
    		double m = (r + l) / 2;
    		if(check(m)) r = m;
    		else l = m;
  	}
  	cout << setprecision(16) << r << '\n';
}

int main() {
	cin.tie(0); cout.tie(0);
	cout.sync_with_stdio(0);
	solve();
	return 0;
}
