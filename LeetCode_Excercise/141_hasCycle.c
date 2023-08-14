#include "main.h"
/*
Given head, the head of a linked list, determine if the linked list has a cycle in it.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
Return true if there is a cycle in the linked list. Otherwise, return false
*/


bool hasCycle(struct ListNode* head) {
    if (head == NULL || head->next == NULL) { return false; }
    struct ListNode* walker = malloc(sizeof(struct ListNode));
    walker = head;
    int ss = head;

    int array[90000] = { 0 };
    int index;
    array[0] = 1;
    while (walker->next != NULL) {
        walker = walker->next;
        index = ((int)walker ^ ss) / 32;
        if (array[index] != 1) {
            array[index] = 1;
        }
        else {
            return true;
        }
    }
    return false;
}