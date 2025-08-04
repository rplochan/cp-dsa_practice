#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int j=0; j<n; j++) {
            cin >> a[j];
        }

        int count_0 =0;
        for(int j=0; j<n; j++) {
            if(a[j] == 0) {
                count_0++;
            }
        }
        int sum = 0;
        for(int j=0; j<n; j++) {
           sum+= a[j];
        }
        cout << count_0 + sum << endl;
    }
    return 0;
}