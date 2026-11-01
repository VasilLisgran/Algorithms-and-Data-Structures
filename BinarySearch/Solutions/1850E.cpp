#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;

    while (t--){
        long long n, c;
        cin >> n >> c;

        vector<long long> v;
        for(int i = 0; i<n; i++){
            long long a;
            cin >> a;
            v.push_back(a);
        }

        long long l = -1;
        long long r = 5*10e8;
        while(r>=l){
            long long mid = (l + r)/2;

            //__int128 S = 0;

            long long S = 0;

            for(int j = 0; j < n; j++){
                S += (v[j] + mid*2)*(v[j] + mid*2);
                if(S>c) break;
            }

            if(S>c) r = mid-1;
            else if (S < c) l = mid+1;
            else{
                cout << mid << '\n';
                break;
            }
        }
    }
}