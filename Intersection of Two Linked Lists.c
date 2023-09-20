/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *tmpFirnode = headA;
    struct ListNode *tmpSecnode = headB;

    while(tmpFirnode != tmpSecnode){
        tmpFirnode = (tmpFirnode != NULL) ? tmpFirnode->next : headB;
        tmpSecnode = (tmpSecnode != NULL) ? tmpSecnode->next : headA;
    }
    return tmpFirnode;
}