#include <bits/stdc++.h>

using namespace std;

void solution(){

}

int main(){
    int t; 
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v;

        long long att = 0;

        for(int i = 0; i < n; i++){
            long long a;
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < n; i++){
            if(v[i] * (v.size() - i) >= k) {
                att += k;
                cout << att << '\n';
                break;
            }
            else
            {
                att += v[i] + 1;
                k -= v[i];
            }
            
        }
    }
    
}