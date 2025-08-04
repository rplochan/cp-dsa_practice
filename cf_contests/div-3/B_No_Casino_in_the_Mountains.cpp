#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int j=0; j<n; j++){
            cin >> a[j];
        }
        int ans =0,count =0;

        for(int i=0; i<n; i++){
            if(a[i] == 0){
                count++;
                if(count == k){
                    ans++;
                    count =0;
                    i++;
                }
            }
            else{
                count =0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}