#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int n = s.size();

    int cnt = 1;
    int maxcnt = 1;
    for(int i = 1; i < n; i++) { 
        if(s[i] == s[i-1]) {
            cnt++;
            maxcnt = max(maxcnt, cnt);
        }
         else {       
            cnt = 1;
        }
        
    }

    cout << maxcnt << endl;



    return 0;
}      
            
   