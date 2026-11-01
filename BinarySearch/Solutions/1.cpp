#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long a, b, c;
        cin >> a >> b >> c;

        long long summa = a + b + c;
        long long k = summa / 9;

        if (summa % 9 == 0 && min({a, b, c}) >= k ) cout << "YES\n";
        else cout << "NO\n";
    }
}
