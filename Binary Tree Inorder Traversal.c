/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void inorderfunc(struct TreeNode* root, int* output, int* returnSize){
    if (root==NULL) return;

    inorderfunc(root->left,output,returnSize);
    output[*returnSize] = root->val;
    (*returnSize)++;
    inorderfunc(root->right,output,returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int* output = malloc(100 * sizeof(int));
    *returnSize = 0;
    inorderfunc(root,output,returnSize);
    return output;
}