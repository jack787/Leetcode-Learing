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
        queue<TreeNode*>que;
        if(!root)return 0;
        int h=1;
        que.push(root);
        bool flag=true;
        while(que.size()&&flag)
        {
            vector<TreeNode*>v;
            while(que.size())
            {
                auto t=que.front();
                que.pop();
                v.push_back(t);
            }
            for(auto t:v)
            {
                auto l=t->left,r=t->right;
                if(!l&&!r){
                    flag=false;
                    break;
                }
                if(l)que.push(l);
                if(r)que.push(r);
            }
            if(flag)h++;
        }
        return h;
    }
};