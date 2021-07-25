#include <bits/stdc++.h>
using namespace std;

void rotateArr(int arr[], int d, int n){
    
    int  i =0,j=d-1;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
     i =d,j=n-1;
    while(i<j)
        swap(arr[i++],arr[j--]);
    
     i =0,j = n-1;
    while(i<j)
        swap(arr[i++],arr[j--]);
}
int main(){
	
	return 0;
}