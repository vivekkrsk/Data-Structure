#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxrob(vector<long long int>& nums) {
        long long int n = nums.size();
        // vector<int> dp(n,-1);
        long long int prev = nums[0];
       long long int prev2 =0;
        for(long long int i=1; i<n; i++)
        {
            long long int take = nums[i];
            if(i>1) take += prev2;

            long long int nottake = 0+ prev;
            long long int curi = max(take, nottake);
            prev2 = prev;
            prev= curi;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        long long int n =nums.size();
        vector<long long int> temp1,temp2;
        if(n==1) return nums[0];
        for(long long int i=0; i<n; i++)
        {
            if(i!=0) temp1.push_back(nums[i]);
            if(i != n-1) temp2.push_back(nums[i]);
        }
        return max(maxrob(temp1), maxrob(temp2));
        
    }
};

int main()
{
    

    return 0;
}