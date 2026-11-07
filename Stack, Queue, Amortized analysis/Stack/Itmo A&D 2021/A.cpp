#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    vector<long long> stack;
    vector<long long> minStack;

    for(int i = 0; i < n; i++){
        int ans;
        cin >> ans;
        if(ans == 1){
            int b;
            cin >> b;
            stack.push_back(b);
            if(minStack.empty() || minStack.back() > b){
                minStack.push_back(b);
            }
            else{
                minStack.push_back(minStack.back());
            }
        }
        else if(ans == 2){
            stack.pop_back();
            minStack.pop_back();
        }
        else{
            cout << minStack.back() << '\n';
        }
    }

}