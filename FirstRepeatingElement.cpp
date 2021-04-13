#include <bits/stdc++.h>
using namespace std;

int firstRepeated(int arr[], int n) {
        //code here
        int min  = -2;
        set <int> s;
        for(int i=n-1;i>=0;i--){
            if(s.find(arr[i]) != s.end())
                min = i;
            else
                s.insert(arr[i]);
        }
        
        return min+1;
    }
int main(){
	
	return 0;
}