#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> sh;

    int total = 0;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(!sh.empty() && sh.back().first == a){
            sh.back().second++;
        }
        else{
            if(!sh.empty() && sh.back().second >= 3){
                total += sh.back().second;
                sh.pop_back();
            }

            if(!sh.empty() && sh.back().first == a){
                sh.back().second++;
            }
            else{
                sh.push_back({a, 1});
            }
        }
    }
    if(!sh.empty() && sh.back().second >= 3){
        total += sh.back().second;
    }

    cout << total;
}