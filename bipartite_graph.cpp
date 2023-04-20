#include <bits/stdc++.h>
using namespace std;

class Solution {
private: 
    bool check(int start, int v, vector<int> adj[], int color[]){
        queue<int> q;
        q.push(start);
        color[start]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(auto it:adj[node]){
                if(color[it]==-1){
                    color[it]=!color[node];
                    q.push(it);
                }
                    else if(color[it]==color[node]) return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int> adj[v];

        for(int i=0; i<v; i++){
             for(int j=0; j<graph[i].size(); j++)
                {
                    int node = graph[i][j];
                    adj[i].push_back(node);
                }
        }

        
        int color[v];
        for(int i=0; i<v; i++){
            color[i]=-1;
        }

        for(int i=0; i<v; i++){
            if(color[i]==-1){
                if(check(i,v,adj,color)==false) return false;
            }
        }

        return true;
    }
};

int main()
{
    

    return 0;
}