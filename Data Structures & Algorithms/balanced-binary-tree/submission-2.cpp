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
    int hieght(TreeNode* root){
        if(root == NULL) return 0;

        int left = hieght(root -> left);
        int right = hieght(root -> right);

        return max(left,right) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        int left_ht = hieght(root -> left);
        int right_ht = hieght(root -> right);

        if(abs(left_ht - right_ht) > 1) return false;

        return isBalanced(root->left) && isBalanced(root->right); 
    } 
};
