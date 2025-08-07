#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int j=0; j<n; j++){
            cin >> a[j];
        }
        set<int> s;

        for(int i=0; i<n; i++){
            if(a[i] != -1){
                s.insert(a[i]);
            }
        }
        if(s.size() == 2){
            cout << "NO" << endl;
        }
        else if(s.size() == 1){
            vector<int> v(s.begin(), s.end());
            if(v[0] != 0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else if(s.size() == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;  
        }
            

    }
    
    return 0;
}