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
    TreeNode* buildtree(vector<int> & preorder, int prestart, int preend, vector<int>& inorder, int instart, int inend,map<int,int> inmap)
    {
        if(prestart>preend || instart>inend) return NULL;

        TreeNode* root = new TreeNode(preorder[prestart]);
        int inRoot = inmap[root->val];
        int numsleft = inRoot-instart;
        root->left = buildtree(preorder, prestart+1,prestart+numsleft, inorder,instart,inRoot-1, inmap);
        root->right = buildtree(preorder, prestart+numsleft+1, preend, inorder, inRoot+1, inend, inmap);

        return root; 
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int, int> inmap;
        for(int i=0; i<inorder.size(); i++) 
        {
            inmap[inorder[i]] = i;

        }
        TreeNode* root = buildtree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1, inmap);

        return root;
    }
};

int main()
{
    

    return 0;
}