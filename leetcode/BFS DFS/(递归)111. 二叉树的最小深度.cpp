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
public:
    int minDepth(TreeNode* root) {
        if(!root)return 0;//无根
        int left_Depth=minDepth(root->left);//左子树的高度
        int right_Depth=minDepth(root->right);//右子树的高度
        if(!left_Depth||!right_Depth)return left_Depth+right_Depth+1;//有个height=0,+根
        return min(left_Depth,right_Depth)+1;
    }
};