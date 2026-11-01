#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        int m = 0;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        for(int k = 0; k < n; k++){
            for(int j = 0; j < n; j++){
                m = max(m, v[k]^v[j]);
        }
    }

        cout << m << '\n';
    }
}