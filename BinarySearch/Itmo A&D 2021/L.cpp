#include <bits/stdc++.h>
using namespace std;


int count(long long x, vector<pair<long long, long long>> c, long long k, int n){
    long long count = 0;

    for(int i = 1; i <= n; i++){
        if(x < c[i].first){
            continue;
        }
        else{
            count += min(c[i].second, x)/(i);
        }
    }
    return count < k;
}

int main(){
    int n;
    long long k;
    cin >> n >> k;

    vector<pair<long long, long long>> c(n+1);
    for(int i = 1; i <= n; i++){
        c[i] = {i, 1LL*i*n};
    }

    long long l = 0, r = 1LL * n * n;
    while(l<r){
        long long mid = (l + r)/2;
        if(count(mid, c, k, n)){
            l = mid + 1;
        }
        else{
            r = mid;
        }
    }
    cout << l;
}