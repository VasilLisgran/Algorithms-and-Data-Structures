#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, l;

    cin >> n >> l;

    vector<long long> nums;

    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());

    double df = nums[0] - 0;
    double ds = l - nums[n-1];
    double d = max(df, ds);

    for (int m = 0; m < n-1; m++)
    {   
        d = max(d, (nums[m+1] - nums[m]) / 2.0);
    }

    cout << fixed << setprecision(10) << d;
    
}