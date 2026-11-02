#include <bits/stdc++.h>

using namespace std;



int main(){
    int n, k; cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while(k--){
        
        long long x; cin >> x;
        int l = 0, r = n;

        while (l < r)
        {
            int mid = (l+r)/2;
            if(a[mid] >= x) r = mid;
            else l = mid+1;
        }
        if (l == 0) cout << a[0] << '\n'; 
        else if (l == n) cout << a[n - 1] << '\n';
        else if(x - a[l-1] <= a[l] - x) cout << a[l-1] << '\n';
        else cout << a[l] << '\n';

    }
}