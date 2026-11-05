#include <bits/stdc++.h>
using namespace std;

int check(vector<int>& a, long long mid, int k){
    int parts = 1;
    long long s = 0;

    for(auto el : a){
        if (el > mid) return false; 

        s += el;
        if(s > mid){
            parts+=1;
            s = el;
        }
    }

    return parts <= k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    long long l = 0, r = 1e15;

    while(l < r){
        long long mid = (l+r)/2;
        if(check(a, mid, k)){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }

    cout << l;
}