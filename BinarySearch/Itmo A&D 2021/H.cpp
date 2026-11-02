#include <bits/stdc++.h>
using namespace std;

int main(){
    double c;
    cin >> c;

    double l = 0;
    double r = 10e10;

    while (r - l > 0.00000000001){
        double mid = (l+r) / 2.0;

        if(mid*mid + sqrtl(mid) >= c){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    cout << fixed << setprecision(10) << (l) / 1.0 << "\n";
}