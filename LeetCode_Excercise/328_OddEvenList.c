/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include "main.h"
struct ListNode* oddEvenList(struct ListNode* head) {
    //struct ListNode* odd = malloc(sizeof(ListNode));

    struct ListNode* odd = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* prevodd;// = (struct ListNode *)malloc(sizeof(struct ListNode));
    //odd->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* copyodd = (struct ListNode*)malloc(sizeof(struct ListNode));
    copyodd = odd;

    struct ListNode* current = head;
    int count = 0;
    if (head == NULL) {
        return NULL;
    }
    else if (head->next == NULL) {
        return head;
    }
    while (current->next != NULL) {


        odd->val = current->next->val;
        odd->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        prevodd = odd;
        odd = odd->next;
        current->next = current->next->next;
        //current = current -> next;
        count++;
        if (current->next == NULL) {
            break;
        }
        else {
            current = current->next;
        }


    }
    prevodd->next = NULL;
    current->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    current->next = copyodd;

    return head;
}