#include <bits/stdc++.h>
using namespace std;

int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> dp(n,vector<int>(m,0));

    for(int j=0; j<m;j++) dp[0][j]=matrix[0][j];
    for(int i=1; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            int u = matrix[i][j]+dp[i-1][j];
            int ld = matrix[i][j];
            if(j-1>=0)ld+=dp[i-1][j-1];
            else ld+=-1e8;
            int rd = matrix[i][j];
            if(j+1<m)rd+= dp[i-1][j+1];   
            else rd += -1e8;
            dp[i][j]= max(u,max(ld,rd));
        }
    }
    int maxi=-1e8;
    for(int j=0; j<m;j++)
    {
       maxi = max(maxi,dp[n-1][j]);
    }
    return maxi;
}

int main()
{
    

    return 0;
}