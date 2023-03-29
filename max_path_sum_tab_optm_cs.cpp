#include <bits/stdc++.h>
using namespace std;

int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    vector<int> prev(m,0),cur(m,0);

    for(int j=0; j<m;j++) prev[j]=matrix[0][j];
    for(int i=1; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            int u = matrix[i][j]+prev[j];
            int ld = matrix[i][j];
            if(j-1>=0)ld+=prev[j-1];
            else ld+=-1e8;
            int rd = matrix[i][j];
            if(j+1<m)rd+= prev[j+1];   
            else rd += -1e8;
            cur[j]= max(u,max(ld,rd));
        }
        prev=cur;
    }
    int maxi=-1e8;
    for(int j=0; j<m;j++)
    {
       maxi = max(maxi,prev[j]);
    }
    return maxi;
}

int main()
{
    

    return 0;
}