#include <bits/stdc++.h>
using namespace std;

int mod = (int)(10^9+7);


int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here

    vector<int> prev(m,0);
    for(int i = 0; i<n; i++)
    {
        vector<int> cur(m,0);
        for(int j=0; j<m; j++)
        {
            if(mat[i][j]==-1) cur[j]=0;
            else if(i==0&& j==0) cur[j]=1;
            else
            {
                int up=0,left=0;
                if(i>0) up = prev[j];
                if(j>0) left =cur[j-1];
               
                cur[j]=(up+left)%mod;
            }
        }
        prev=cur;
    }
    return prev[m-1];

}


int main()
{
    

    return 0;
}