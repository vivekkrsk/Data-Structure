#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

bool isleaf(TreeNode<int>* root)
{
    return !root->left && !root->right;
}

void addleftboundary(TreeNode<int>* root, vector<int> &res)
{
    TreeNode<int>*cur = root->left;
    while(cur)
    {
        if(!isleaf(cur)) res.push_back(cur->data);
        if(cur->left) cur= cur->left;
    }
}


void addrightboundary(TreeNode<int>* root, vector<int> &res)
{
    TreeNode<int>* cur= root->right;
    vector<int> temp;
    while(cur)
    {
        if(!isleaf(cur)) temp.push_back(cur->data);
        if(cur->right) cur=cur->right;
        else cur= cur->left;
    }
    for(int i= temp.size()-1; i>=0; --i)
    {
        res.push_back(temp[i]);
    }
}

void addleaves(TreeNode<int>* root, vector<int> &res)
{
    if(isleaf(root))
    {
        res.push_back(root->data);
        return;
    }
    if(root->left) addleaves(root->left, res);
    if(root->right) addleaves(root->right, res);
}

vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int> res;
    if(!isleaf(root))res.push_back(root->data);
    addleftboundary(root,res);
    addleaves(root,res);
    addrightboundary(root,res);
    return res;
}

int main()
{
    

    return 0;
}