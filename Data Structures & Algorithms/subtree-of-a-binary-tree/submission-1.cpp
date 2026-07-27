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
    bool sametree(TreeNode* p , TreeNode* q){
        if(p == NULL && q == NULL) return true;
        if(p != nullptr && q == nullptr || p == nullptr && q != nullptr) return false;
        if(p->val != q->val) return false;
        bool l = sametree(p->left , q->left);
        bool r = sametree(p->right , q->right);
        return l && r;
    }
    bool dfs(TreeNode* root , TreeNode* sub)
    {
        if(!root) return false;
        if(root->val == sub->val && sametree(root,sub)){
            return true;
        }
            bool l = dfs(root->left , sub);
            bool r = dfs(root->right , sub);
        return l || r;

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return dfs(root , subRoot);
    }
};
