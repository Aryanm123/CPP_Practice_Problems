#include <bits/stdc++.h>
using namespace std;

int remove_duplicate(int arr[],int n){
     
        int j = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1])
                arr[j++] = arr[i];
                
        }
        arr[j++] = arr[n-1];
        return j;
    }
int main(){
	
	return 0;
}