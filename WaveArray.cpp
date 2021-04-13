#include <bits/stdc++.h>
using namespace std;

void convertToWave(int *arr, int n){
        
        // Your code here
        for(int i=0;i<n;i+=2){
            if(i+1<n)
                swap(arr[i],arr[i+1]);
        }
    }
int main(){
    
    return 0;
}