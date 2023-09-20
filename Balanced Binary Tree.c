/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int cntnode (struct TreeNode *root){
    if (root==NULL) return 0;

    int h_left = cntnode(root->left);
    int h_right = cntnode(root->right);

    return 1+( h_left >= h_right ? h_left : h_right);

}

bool isBalanced(struct TreeNode* root){
    if(root==NULL) return 1;

    int h_left=cntnode(root->left);
    int h_right=cntnode(root->right);

    if (abs(h_left - h_right) > 1) return 0;

    return isBalanced(root->left) && isBalanced(root->right);
}