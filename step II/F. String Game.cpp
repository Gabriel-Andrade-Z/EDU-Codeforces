#include<bits/stdc++.h>
using namespace std;

int n; vector<int> a;
string s, t;

bool check(int m){
        string temp = s;
        for(int i = 0;i <= m;i++)
                temp[a[i] - 1] = '#';
        int l = 0, r = 0;
        while(l < temp.size() && r < t.size()){
                if(temp[l] == t[r]) r++;
                l++;
        }
        return r == t.size();
}

void solve(){
        cin >> s >> t;
        n = s.size(); a.resize(n);
        for(int& i : a) cin >> i;
        int l = -1, r = n - 1;
        while(r > l + 1){
                int m = (r + l) >> 1;
                if(check(m)) l = m;
                else r = m;
        }
        cout << l + 1 << '\n';
}

int main(){
        cin.tie(0); cout.tie(0);
        ios::sync_with_stdio(0);
        solve();
        return 0;
}
