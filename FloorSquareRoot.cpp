#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
long long int floorSqrt(long long int x) 
{
    if(x==0 || x==1)
        return x;
    int left =1 ,right = x/2;
    while(left<=right){
        int mid = (left+ right )/2;
        if(mid * mid == x)
                return mid;
        else if(mid * mid < x)
                left = mid+1;
        else
                right = mid-1;            
    }

    return left-1;
} 

int main(){
    
    return 0;
}


int main(){
    
    return 0;
}
