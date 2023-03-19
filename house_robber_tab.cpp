#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        dp[0]=nums[0];
        for(int i=1; i<n; i++)
        {
            int take = nums[i];
            if(i>1) take += dp[i-2];
            int nottake=0+dp[i-1];

            dp[i]=max(take,nottake);
        }
        return dp[n-1];
    }
};

int main()
{
    

    return 0;
}