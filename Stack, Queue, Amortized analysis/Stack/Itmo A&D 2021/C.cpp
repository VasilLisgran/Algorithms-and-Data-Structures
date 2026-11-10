#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    cin >> n;

    int sz = n + 1;
    vector<int> d(sz);
    int h = 0, t = 0;
    vector<int> pos(100001);
    int p = 0;

    for(int i = 0; i < n; i++){
        int a;

        cin >> a;
        

        if(a == 1){
            int id;
            cin >> id;

            d[p % sz] = id;
            pos[id] = p;
            p++;
        }
        else if(a == 2){
            h++;
        }
        else if(a == 3){
            p--;
        }
        else if (a == 4)
        {
            int q;
            cin >> q;
            cout<< (pos[q] - h)%n << '\n';
        }
        else{
            cout << d[h%sz] << '\n';
        }
    }
}