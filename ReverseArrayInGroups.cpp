#include <bits/stdc++.h>
using namespace std;

void reverseInGroups(vector<long long>& arr, int n, int k){
        
        for(int i=0;i<n;i+=k){
            int p=i,q;
            if(k+i-1 > n-1)
               q = n-1;
            else
                 q = k+i-1;

            while(p<q){
                int temp = arr[p];
                arr[p] = arr[q];
                arr[q] = temp;
                p++;
                q--;
            }
        }
    }
int main(){
	
	return 0;
}