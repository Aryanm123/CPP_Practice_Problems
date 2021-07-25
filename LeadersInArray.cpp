#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n){
    int max = -999;
    vector<int> ans;
    // code here
    for(int i=n-1;i>=0;i--){
        if(a[i]>=max){
            max = a[i];
            ans.push_back(max);
            
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    
    return 0;
}