#include <bits/stdc++.h>
using namespace std;

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int floor =-1;
    while(root)
    {
        if(root->val==X)
        {
            floor=root->val;
            return floor;

        }
        if(X>root->val)
        {
            floor= root->val;
            root= root->right;
        }
        else root=root->left;
    }
    return floor;
}

int main()
{
    

    return 0;
}