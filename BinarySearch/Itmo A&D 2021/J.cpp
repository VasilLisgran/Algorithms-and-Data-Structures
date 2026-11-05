#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<double> v(n), w(n);

    for(int i = 0; i < n; i++){
        cin >> v[i] >> w[i];
    }

     double l = 0, r = 1e10;

    for(int it = 0; it < 100; it++){
        double mid = (l + r)/2;
        vector<double> b(n);

        for (int i = 0; i < n; i++) {
            b[i] = v[i] - mid * w[i];
        }
        sort(b.rbegin(), b.rend());

        double sum = 0;

        for (int i = 0; i < k; i++) {
            sum += b[i];
        }

        if (sum >= 0) {
            l = mid;
        } else {
            r = mid;
        }
    }

    vector<pair<double, int>> b;

    for (int i = 0; i < n; i++) {
        b.push_back({v[i] - l * w[i], i + 1});
    }

    sort(b.rbegin(), b.rend());

    for (int i = 0; i < k; i++) {
        cout << b[i].second << " ";
    }

}