/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int cntnode(struct TreeNode* root){
    if(root==NULL)return 0;

    int h_L = cntnode(root->left);
    int h_R = cntnode(root->right);

    if (root->left==NULL || root->right==NULL) return h_L + h_R +1;

    return 1 + (h_L < h_R ? h_L : h_R);

}

int minDepth(struct TreeNode* root){
    return cntnode(root);
}