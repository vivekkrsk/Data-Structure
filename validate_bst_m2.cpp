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
   bool isvalidbstf(TreeNode* root, long long lmin, long long lmax)
   {
       if(root==NULL) return true;

       if(root->val>=lmax || root->val<=lmin) return false;
       return isvalidbstf(root->left, lmin, root->val) && isvalidbstf(root->right, root->val, lmax);
   }
public:
    bool isValidBST(TreeNode* root) {
        return isvalidbstf(root, LONG_MIN,LONG_MAX);
    }
};

int main()
{
    

    return 0;
}