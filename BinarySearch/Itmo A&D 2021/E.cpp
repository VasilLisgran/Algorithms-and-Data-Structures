#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int k; cin >> k;

    while (k--){
        int l, r;
        cin >> l >> r;

        int lo = 0, hi = n;
        while (lo < hi){
            int mid = (lo + hi) / 2;
            if (v[mid] >= l) hi = mid;
            else lo = mid + 1;
        }
        int left = lo;

        lo = 0; hi = n;
        while (lo < hi){
            int mid = (lo + hi) / 2;
            if (v[mid] > r) hi = mid;
            else lo = mid;
        }
        int right = lo;

        cout << right - left << ' ';
    }
    cout << '\n';
}