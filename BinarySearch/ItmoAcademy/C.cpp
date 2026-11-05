#include <bits/stdc++.h>
using namespace std;

bool check(long long mid, vector<long long>& st, int n, int k){
    int cows = 1;
    long long last_pos = st[0];

    for(int i = 0; i < n; i++){
        if(st[i] - last_pos >= mid){
            cows += 1;
            last_pos = st[i];
        }
    }
    return cows >= k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;

    vector<long long> st(n);
    for(int i = 0; i < n; i++){
        cin >> st[i];
    }

    long long l = 0;
    long long r = 1e11;

    while(l < r){
        long long mid = (l + r + 1) / 2;

        if(check(mid, st, n, k)){
            l = mid;
        }
        else{
            r = mid - 1;
        }
    }

    cout << l;
}