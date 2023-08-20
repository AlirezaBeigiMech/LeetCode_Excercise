#include "main.h"
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    if (count > 1) {
        temp = head;
        for (int i = 0; i < count / 2 - 1; i++) {
            temp = temp->next;
        }
        struct ListNode* Pdelete;
        Pdelete = temp->next;
        temp->next = temp->next->next;
        free(Pdelete);
    }
    else {
        free(head);
        return NULL;
    }
    return head;
}