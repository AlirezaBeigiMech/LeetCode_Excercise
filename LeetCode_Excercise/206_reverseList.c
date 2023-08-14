#include "main.h"
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL) { return NULL; };
    if (head->next == NULL) { return head; };
    struct ListNode* rest = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}