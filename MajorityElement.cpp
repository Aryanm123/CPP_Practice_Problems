#include <bits/stdc++.h>
using namespace std;
int majorityWins(int arr[], int n, int x,int y)
{
    int count1 = 0,count2 = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == x)
            count1++;
        if(arr[i] == y)
            count2++;
    }
    if(count1==count2)
        return min(x,y);
    
    return count1>count2 ? x : y;
}
int main(){
	
	return 0;
}