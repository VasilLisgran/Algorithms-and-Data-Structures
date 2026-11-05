#include <bits/stdc++.h>
using namespace std;

int check(double T, int n, vector<pair<long long, long long>>& vec){
    double li = -1e18;
    double ri = 1e18;
    for(int j = 0; j < n; j++){
        if (vec[j].first - T*vec[j].second > li){
            li = vec[j].first - T*vec[j].second;
        } 
        if(vec[j].first + T*vec[j].second < ri){
            ri = vec[j].first + T*vec[j].second;
        }
    }

    return li <= ri;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;

    vector<pair<long long, long long>> vec;
    for(int i = 0; i < n; i++){
        long long x, v;
        cin >> x >> v;
        vec.push_back({x, v});
    }

    double l = 0, r = 10e10;

    for (int iter = 0; iter < 100; iter++)
    {
        double mid = (l+r)/2;
        if(check(mid, n, vec)){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    cout << fixed << setprecision(12) << l;
}