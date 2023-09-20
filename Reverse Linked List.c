/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *pre = NULL;
    struct ListNode *now = head;
    struct ListNode *next = NULL;

    while(now != NULL){
        next = now->next;
        now->next = pre;
        pre = now;
        now = next;
    }
    return pre;
}