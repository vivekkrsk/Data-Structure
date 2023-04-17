#include <bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(int node, vector<int> adjls[],vector<int> & vis){
        vis[node]=1;
        for(auto it:adjls[node])
        {
            if(!vis[it]) dfs(it,adjls,vis);
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<int> vis(V+1,0);
        vector<int> adjls[V];
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++)
            {
                if(isConnected[i][j]==1 && i !=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        
        int cnt=0;
        for(int i=0; i<V;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,adjls,vis);
            }
        }
        return cnt;
    }
};

int main()
{
    

    return 0;
}