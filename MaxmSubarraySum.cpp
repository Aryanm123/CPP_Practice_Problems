#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxSoFar = INT_MIN,left = 0,maxEndingHere=0,start=0,end=0,s=0;
        for(int i=0;i<n;i++){
            maxEndingHere = maxEndingHere + arr[i];
            if(maxEndingHere  > maxSoFar){
                maxSoFar = maxEndingHere ;
                start = s;
                end = i;
            }
            if(maxEndingHere < 0){
                maxEndingHere = 0;
                s = i;
            }    
        }
        cout<<"Start: "<<start<<" End: "<<end<<endl;
        return maxSoFar;
    }
int main(){
    
    return 0;
}
