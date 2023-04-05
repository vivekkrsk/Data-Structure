#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void path(TreeNode* root, vector<string>& ans, string s)
    {
        if(!root) return;
        if(!root->left && !root->right) ans.push_back(s+to_string(root->val));
        else
        {
            if(root->left) path(root->left, ans, s+to_string(root->val)+"->");
            if(root->right) path(root->right, ans, s+to_string(root->val+"->"));
        }
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";
        path(root,ans,s);
        return ans;
    }
};

int main()
{
    

    return 0;
}