#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int j=0; j<n; j++){
            cin >> a[j];
        }
        for(int j=0; j<n; j++){
            cin >> b[j];
        }
        int ans =0;

        for(int i=0; i<n; i++){
            if(a[i] > b[i]){
                ans +=(a[i] - b[i]);
            }
        }
        cout << ans+1 << endl;
    }
        
  return 0;
}