#include <bits/stdc++.h>
using namespace std;

int mod = (int)(10^9+7);


int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here

    int dp[n][m];
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(mat[i][j]==-1) dp[i][j]=0;
            else if(i==0&& j==0) dp[i][j]=1;
            else
            {
                int up=0,left=0;
                if(i>0) up = dp[i-1][j];
                if(j>0) left =dp[i][j-1];
               
                dp[i][j]=(up+left)%mod;
            }
        }
    }
    return dp[n-1][m-1];

}

int main()
{
    

    return 0;
}