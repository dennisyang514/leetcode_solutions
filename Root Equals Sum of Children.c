/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkTree(struct TreeNode* root){
    int sum = root->val;
    return (root->left->val + root->right->val != sum) ? 0 : 1;
}