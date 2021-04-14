#include <bits/stdc++.h>
using namespace std;
void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=0,j=0,k=n-1;
            while(i<=k and j<m){
                if(arr1[i]<arr2[j])
                    i++;
                else
                    swap(arr1[k--],arr2[j++]);
            }
            
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 

int main(){
    
    return 0;
}


