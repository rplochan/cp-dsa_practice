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
        if(n%2 !=0){
            for(int j=0; j<n; j++){
                if(j %2 == 0){
                    cout << -1 << " ";
                }
                else{
                    cout << 3 << " ";
                }
            }
        }
        else{
            for(int j=0; j<n-1; j++){
                if(j %2 == 0){
                    cout << -1 << " ";
                }
                else{
                    cout << 3 << " ";
                }
            }
            cout << 2;
        }

     cout << "\n";

    }
       
        
  return 0;
}