#include <bits/stdc++.h>
using namespace std;
int Search(vector<int> arr, int key) {
    //code here
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[low]<=arr[mid]){
            if(arr[low]<=key && arr[mid]>=key)
                high = mid-1;
            else 
                low = mid+1;
        }
        else {
            if(arr[mid]<=key && arr[high]>=key)
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;
}

int main(){
    
    return 0;
}


