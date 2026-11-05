#include <bits/stdc++.h>
using namespace std;

int check(long long x, vector<long long>& a, vector<long long>& b, long long k, int n){
    long long count = 0;
    int j = n;

    for(int i = 1; i <= n; i++){
        while(j >= 1 && a[i] + b[j] > x){
            j--;
        }
        count += j;
    }

    return count < k;
}

int main(){
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n+1), b(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    sort(a.begin() + 1, a.end());
    sort(b.begin() + 1, b.end());

    long long l = 0, r = 10e10;

    while (l<r)
    {
        long long mid = (l+r)/2;
        if(check(mid, a, b, k, n)){
            l = mid + 1;
        }
        else{
            r = mid;
        }

    }
    cout << l;
    
}