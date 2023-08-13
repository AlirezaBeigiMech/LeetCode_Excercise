/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;

};

/*
21. Merge Two Sorted Lists
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.
*/

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    //struct ListNode* res = (struct ListNode* )malloc(sizeof(ListNode));
    if (list1 == NULL && list2 == NULL) {
        return NULL;
    }
    struct ListNode* temp = malloc(sizeof(struct ListNode));
    struct ListNode* res = malloc(sizeof(struct ListNode));
    res->val = 0;
    res->next = temp;
    //res->val = 5;
    //*res = *temp;
    int count = 0;
    //res = list1;
    while (list1 != NULL || list2 != NULL) {
        //(struct ListNode* )malloc(sizeof(struct ListNode));
        //printf("count = %d, %d\n", list2->val, list1->val);

        if (list1 == NULL && list2 != NULL) {

            temp->val = list2->val;
            list2 = list2->next;
        }
        else if (list2 == NULL && list1 != NULL) {

            temp->val = list1->val;

            list1 = list1->next;

        }

        else if (list1->val < list2->val) {

            temp->val = list1->val;
            list1 = list1->next;
        }
        else if (list1->val >= list2->val) {
            temp->val = list2->val;
            list2 = list2->next;
        }

        if (list1 != NULL || list2 != NULL) {
            temp->next = malloc(sizeof(struct ListNode));
            //temp->val = 0;
            temp = temp->next;
        }
        else {
            temp->next = NULL;
        }


        count++;
    }


    res = res->next;


    return res;

}