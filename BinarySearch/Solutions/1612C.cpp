#include <bits/stdc++.h>
using namespace std;

bool check(long long mid, long long x, long long k){
    long long s;
    if(mid < k){
        s = mid * (1 + mid)/2;
    }
    else{
        long long t = mid - k;

        s = k * (1 + k)/2 + t*(k - 1 + k - t)/2;
    }
    return s >= x;
}

int main(){
    int t; cin >> t;

    while (t--)
    {
        long long k, x;
        cin >> k >> x;

        long long l = 0;
        long long r = 2*k-1;

        while (r - l > 1)
        {
            long long mid = (l+r)/2;
            if(check(mid, x, k)){
                r = mid;
            }
            else{
                l = mid;
            }
        }
        cout << r << '\n';
    }
    
}