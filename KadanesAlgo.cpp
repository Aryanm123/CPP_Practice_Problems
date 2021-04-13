#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int prefixSum[n];
        prefixSum[0] = arr[0];
        for(int i=1;i<n;i++){
            if(prefixSum[i-1] + arr[i] <arr[i] )
                prefixSum[i] = arr[i];
            else
                prefixSum[i] = prefixSum[i-1] + arr[i];
        }  
        int maxm = -5652423;
        for(int x:prefixSum){
            maxm = max(maxm,x);
        }
        
        return maxm;
    }
int main(){
	
	return 0;
}