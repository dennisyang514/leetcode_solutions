/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
    
    while(head != NULL && head -> val == val){
        head = head->next;
    }

    struct ListNode* tmpnode = head;

    while(tmpnode != NULL && tmpnode->next != NULL){
        if(tmpnode->next->val == val){
            tmpnode->next = tmpnode->next->next;
        }else{
            tmpnode = tmpnode->next;
        }
    }

    return head;
}