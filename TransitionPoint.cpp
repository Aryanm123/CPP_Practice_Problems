#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n) {
    // code here
    int left = 0,right  = n-1;
    int oneAns,zeroAns,mid;
    while(left<=right){
         mid = left + (right-left)/2;
        if(arr[mid] == 1)
        {
            oneAns = mid;
            right = mid-1;
        }
        else{
            zeroAns = mid;
            left = mid+1;
        }
    }
    if(zeroAns == n-1)
        return -1;
    if(oneAns == 0)
        return  0;
    return oneAns;    
}

int main(){
    
    return 0;
}

