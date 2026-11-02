#include <bits/stdc++.h>

using namespace std;

int main(){
    int Vp, Vf;
    cin >> Vp >> Vf;

    double a;
    cin >> a;

    auto T = [&](double x){
        double distance1 = sqrt(x*x + (1-a)*(1-a))/Vp;
        double distance2 = sqrt((1-x)*(1-x) + a*a)/Vf;

        return distance1 + distance2;
    };

    double l = 0, r = 1;

    for(int i = 0; i < 100; i++){
        double m1 = (2*l + r)/3;
        double m2 = (2*r + l)/3;

        if(T(m1) < T(m2)){
            r = m2;
        }
        else{
            l = m1;
        }
    }
    cout << fixed << setprecision(10);
    cout << (l+r)/2 << '\n';
}