/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *tmpnode = head;

    while(tmpnode != NULL && tmpnode->next != NULL){
        if(tmpnode->val == tmpnode->next->val){
            tmpnode->next = tmpnode->next->next;
        }else{
            tmpnode = tmpnode->next;
        }
    }
    return head;
}