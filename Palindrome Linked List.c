/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool isPalindrome(struct ListNode* head){
    // struct ListNode* tmpnode = head;
    // int cntstack=0,stackarr[100]={NULL};

    // if (tmpnode==NULL || tmpnode->next==NULL) return 1;

    // stackarr[cntstack] = tmpnode->val;
    // tmpnode = tmpnode->next;
    // cntstack++;
    
    // while(tmpnode != NULL){
    //     if(stackarr[cntstack-1] != tmpnode->val){
    //         stackarr[cntstack] = tmpnode->val;
    //         cntstack++;
    //     }else{
    //         cntstack--;
    //     }    
    //     tmpnode = tmpnode->next;
    // }
    

    // if(cntstack == 0){
    //     return 1;
    // }else{
    //     return 0;
    // }

    // struct ListNode* fast = head;
    // struct ListNode* slow = head;
    // int cntstack=0, stackarr[10000000]={0};

    // while(fast != NULL && fast->next != NULL){
    //     stackarr[cntstack] = slow->val;
    //     cntstack++;
    //     slow = slow->next;
    //     fast = fast->next->next;
    // }

    // if(fast != NULL) slow = slow->next;

    // while(slow != NULL){
    //     cntstack--;
    //     if (slow->val != stackarr[cntstack]) return 0;
    //     slow = slow->next; 
    // }  
    // return 1;

    struct ListNode* fast = head;
    struct ListNode* slow = head;
    int cntstack = 0;

    // Count the length of the linked list.
    while (fast != NULL && fast->next != NULL) {
        cntstack++;
        fast = fast->next->next;
    }
    
    // Reset the fast pointer.
    fast = head;
    int *stackarr = malloc(cntstack * sizeof(int));
    if (stackarr == NULL) {
        return false; // Memory allocation failed
    }

    cntstack = 0; // Reset counter
    while (fast != NULL && fast->next != NULL) {
        stackarr[cntstack] = slow->val;
        cntstack++;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast != NULL) {
        slow = slow->next;
    }

    while (slow != NULL) {
        cntstack--;
        if (slow->val != stackarr[cntstack]) {
            free(stackarr);
            return false;
        }
        slow = slow->next;
    }
    free(stackarr);
    return true;
}