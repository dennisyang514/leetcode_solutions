/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root){
    if (root==NULL) return 0;

    int h_left = maxDepth(root->left);
    int h_right = maxDepth(root->right);

    return 1 + ( h_left >= h_right ? h_left : h_right);
}