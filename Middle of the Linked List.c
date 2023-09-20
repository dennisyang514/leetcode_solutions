/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* middleNode(struct ListNode* head){
    if (head == NULL) return NULL;

    int cnt = 0;
    struct ListNode* tmpnode = head;

    while(tmpnode != NULL){
        cnt++;
        tmpnode = tmpnode->next;
    }
    
    cnt = cnt/2;

    printf("%d",cnt);

    for(int i=0; i < cnt; i++){
        head = head->next;
    }
    return head;
}