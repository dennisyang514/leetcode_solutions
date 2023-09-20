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

void postorderfunc(struct TreeNode* root,int* output,int* returnSize){
    if(root == NULL)return;

    postorderfunc(root->left, output, returnSize);
    postorderfunc(root->right, output, returnSize);
    output[(*returnSize)++] = root->val;
    return output;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
    int* output = malloc(100 * sizeof(int));
    *returnSize = 0;
    postorderfunc(root,output,returnSize);
    return output;

}