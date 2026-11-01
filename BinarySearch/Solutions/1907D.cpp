#include <bits/stdc++.h>
using namespace std;

 bool valid(long long k, const vector<pair<long long,long long>>& a){
    long long L = 0, R = 0;              
    for (auto &[l, r] : a) {
        L = max(l, L - k);
        R = min(r, R + k);
        if (L > R) return false;
    }
    return true;                    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<pair<long long , long long >> a(n);

        for(int i = 0; i < n; i++)
            cin >> a[i].first >> a[i].second;

        long long l = -1, r = 1e9 + 1;

        while (r - l > 1){
            long long mid = l + (r - l) / 2;
            if (valid(mid, a)) r = mid;   
            else l = mid;
        }
        cout << r << '\n';
    }
}