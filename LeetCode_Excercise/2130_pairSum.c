/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode* next;
    
};

struct ListNode* recursiveReverseLL(struct ListNode* first) {

    if (first == NULL) return NULL; // list does not exist.

    if (first->next == NULL) return first; // list with only one node.

    struct ListNode* rest = recursiveReverseLL(first->next); // recursive call on rest.

    first->next->next = first; // make first; link to the last node in the reversed rest.

    first->next = NULL; // since first is the new last, make its link NULL.

    return rest; // rest now points to the head of the reversed list.
}

struct ListNode* CopyList(struct ListNode* head) {

    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* root = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp = root;

    while (head != NULL) {
        temp->val = head->val;
        temp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp = temp->next;
        head = head->next;

    }

    return root;
}



int pairSum(struct ListNode* head) {


    struct ListNode* rev = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temphead = (struct ListNode*)malloc(sizeof(struct ListNode));
    temphead = CopyList(head);

    rev = recursiveReverseLL(head);

    int max = rev->val + temphead->val;

    while (temphead != NULL && rev != NULL) {

        if (max < rev->val + temphead->val) {
            max = rev->val + temphead->val;
        }
        rev = rev->next;
        temphead = temphead->next;
    }



    return max;

}