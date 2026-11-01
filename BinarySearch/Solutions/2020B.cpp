#include <bits/stdc++.h>
using namespace std;

bool valid(long long mid, long long k){
    return mid - (long long)sqrtl(mid) >= k;
}

int main(){
    int t; cin >> t;

    while(t--){
        long long n; cin >> n;
        long long l = 1;
        long long r = 2e18;
        while (r>l){
            long long mid = (l+r)/2;
            if(valid(mid, n)) r = mid;
            else l = mid+1;
        }

        cout << r << '\n';
    }
}