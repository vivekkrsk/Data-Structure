#include <bits/stdc++.h>
using namespace std;

/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.

    int ceil = -1;
    while(node)
    {
        if(node->data==x)
        {
            ceil=node->data;
            return ceil;
        }
        if(x>node->data) node= node->right;
        else{
            ceil=node->data;
            node=node->left;
        }
    }
    return ceil;
}

int main()
{
    

    return 0;
}