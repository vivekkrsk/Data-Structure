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
    TreeNode* kthsmallestf(TreeNode* root, int & k)
    {
        if(root==NULL) return NULL;
        TreeNode* left = kthsmallestf(root->left,k);
        if(left!=NULL) return left;
        k--;
        if(k==0) return root;
        return kthsmallestf(root->right, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        return kthsmallestf(root,k)->val;
    }
};

int main()
{
    

    return 0;
}