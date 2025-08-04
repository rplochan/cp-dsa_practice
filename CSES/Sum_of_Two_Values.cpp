#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,x;
    cin >> n >> x;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vector<pair<int,int>> ans;
    for(int i =0; i<n; i++){
        int x = a[i];
        int y = i+1;
        ans.push_back(make_pair(x,y));
    }

    sort(ans.begin(),ans.end());

    int l = 0;
    int r = n-1; 
    int flag = 0;

    while(l<r){
        if(ans[l].first + ans[r].first == x){
            flag = 1;
            break;
        }
        else if(ans[l].first + ans[r].first > x){
            r--;
        }
        else{
            l++;
        }
    }

    if(flag == 0){
        cout << "IMPOSSIBLE" <<endl;
    }
    else{
        cout<<(ans[l].second)<<" "<<(ans[r].second)<<endl;
    }

   
    return 0;
}