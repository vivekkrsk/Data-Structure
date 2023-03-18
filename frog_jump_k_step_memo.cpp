#include <bits/stdc++.h>
using namespace std;

int f(int ind, vector<int> &heights,vector<int> &dp, int k)
{
    if(ind==0)return 0;
    if(dp[ind] != -1) return dp[ind];
    int minstep = INT_MAX;
    for(int j =1; j<=k; j++)
    {   
        if(ind-j>=0)
        {
        int jump = f(ind-j, heights, dp,k ) + abs(heights[ind]-heights[ind-j]);
        minstep = min(minstep, jump);
        }
        else break;
    }
    return minstep;
}

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n+1,-1);
    int k=2;
    return f(n-1,heights, dp,k);
}
int main()
{
    

    return 0;
}