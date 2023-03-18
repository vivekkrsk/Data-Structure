#include <bits/stdc++.h>
using namespace std;

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
   vector<int> dp(n,0);
   dp[0]=0;
   for (int i = 0; i < n; i++)
   {
        int fs = dp[i-1] +abs(heights[i]-heights[i-1]);
        int ss = INT_MAX;
        if(i>1) ss= dp[i-1]+abs(heights[i]-heights[i-1]);
        dp[i]=min(fs,ss);
   }
   return dp[n-1];
   

    
}

int main()
{
    

    return 0;
}