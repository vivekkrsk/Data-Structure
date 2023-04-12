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
    void validate(TreeNode* node, vector<int> & datavec)
    {
        if(node==NULL) return;

        validate(node->left, datavec);
        datavec.push_back(node->val);
        validate(node->right, datavec);

    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int> datavec;
        if(root==NULL) return true;
        validate(root,datavec);
        for(int i=1; i<datavec.size(); i++)
        {
            if(datavec[i-1]>=datavec[i]) return false;
        }
        return true;
    }
};

int main()
{
    

    return 0;
}