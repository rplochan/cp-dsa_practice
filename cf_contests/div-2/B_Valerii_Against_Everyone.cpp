#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        unordered_set<ll> s;
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) s.insert(a[i]);

        if(s.size() == n) cout << "NO\n";
        else cout << "YES\n";
    }

  return 0;
}