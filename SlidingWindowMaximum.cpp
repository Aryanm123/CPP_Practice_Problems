#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n-k+1);
        deque<int> dq;
        int i;
        for(i=0;i<k;i++){
            while(!dq.empty() && nums[i] >= nums[dq.back()])
                dq.pop_back();
           dq.push_back(i); 
        }
        int index = 0;
        for(;i<nums.size();i++){
            ans[index++] = nums[dq.front()];
            while(!dq.empty() && dq.front()<=i-k)
                dq.pop_front();
            while(!dq.empty() && nums[i]>=nums[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        ans[index] = nums[dq.front()];
        
        return ans;
    }

int main(){
    
    return 0;
}



