#include <bits/stdc++.h>
using namespace std;

int check(long long mid, vector<pair<long long, long long>> v, int n, long long k){
    long long count = 0;
    for(int i = 0; i < n; i++){
        if(mid < v[i].first){
            continue;
        }
        else{
            count += (min(v[i].second, mid) - v[i].first + 1);
        }
    }
    return count <= k;
}

int main(){
    int n;
    long long k;

    cin >> n >> k;

    long long l = -2e9, r = 2e9;

    vector<pair<long long, long long>> v;

    for(int i = 0; i < n; i ++){
        long long a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    while (l < r)
    {
        long long mid = l + (r - l)/2;
        if(check(mid, v, n, k)){
            l = mid + 1;
        }
        else{
            r = mid;
        }
    }
    cout << l;
    
}