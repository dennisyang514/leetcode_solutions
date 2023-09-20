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

void preorderfunc(struct TreeNode* root, int* output, int* returnSize){
    if(root == NULL)return;

    output[*returnSize] = root->val;
    (*returnSize)++;
    preorderfunc(root->left, output, returnSize);
    preorderfunc(root->right, output, returnSize);
    return output;
}

int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int* output = malloc(100 * sizeof(int));
    *returnSize = 0;
    preorderfunc(root,output,returnSize);
    return output;
}