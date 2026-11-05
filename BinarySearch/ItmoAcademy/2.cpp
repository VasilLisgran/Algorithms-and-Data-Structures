#include <bits/stdc++.h>

using namespace std;

int ansL, ansR;

int check(double x, vector<int>& a, int n, int d){
    vector<double> p(n+1, 0);
    vector<double> mn(n+1);
    vector<int> mnIndex(n+1);

    for(int i = 0; i < n; i++){
        p[i+1] = p[i] + (a[i] - x);
    }

    mn[0] = p[0];
    mnIndex[0] = 0;

    for(int i = 1; i <= n; i++){
    if(p[i] < mn[i-1]){
        mn[i] = p[i];
        mnIndex[i] = i;
    }
    else{
        mn[i] = mn[i-1];
        mnIndex[i] = mnIndex[i-1];
    }
}

    for(int r = d; r <= n; r++){
        if(mn[r-d] <= p[r]){
            ansR = r;
            ansL = mnIndex[r-d] + 1;
            return 1;
        }
    }
    return 0;
}

int main(){
    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    double l = 0, r = 100;
    for(int i = 0; i < 100; i++){
        double mid = (r + l)/2;
        if(check(mid, a, n, d)){
            l = mid;
        }
        else{
            r = mid;
        }
    }
    cout << ansL << " " << ansR;
}