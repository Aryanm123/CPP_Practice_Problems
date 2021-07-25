#include <bits/stdc++.h>
using namespace std;

int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int diff = INT_MAX,val=-1;
        for(int i=0;i<n;i++){
            if(arr[i]<x){
                int newDiff = x-arr[i];
                if(newDiff<diff){
                    diff = newDiff;
                    val = arr[i];
                }
                
            }
        }
        return val;
        
    }
int main(){
	
	return 0;
}