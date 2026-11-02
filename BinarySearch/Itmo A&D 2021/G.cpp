#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, x, y;
    cin >> n >> x >> y;

    long long r, l;
    long long minimum = min(x, y);
    l = 0; r = minimum + (n-1)*max(x, y);

    if(n == 1){
        cout << minimum;
    }
    else{
        while (l < r)
        {
            long long mid = (r + l)/2;
            if( 1 + (mid - minimum)/x + (mid - minimum)/y >= n ){
                r = mid;
            }
            else{
                l = mid + 1;
            }
        }
        cout << l << '\n';
    }
    
    
}