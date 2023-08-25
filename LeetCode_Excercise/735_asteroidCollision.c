/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node {
    int value;
    struct node* next;
} node_t;

typedef struct Stack {
    int size;
    struct node* head;
} Stack_t;

struct Stack* neutralized(struct Stack* stack, int val);
void printnode(struct node* root);
int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {
    Stack_t* List = (Stack_t*)malloc(sizeof(Stack_t));
    List->head = (node_t*)malloc(sizeof(node_t));
    List->head->next = (node_t*)malloc(sizeof(node_t));
    List->head = NULL;
    List->size = 0;
    for (int i = 0; i < asteroidsSize; i++) {
        //if(i != 0){
        //    printf("listvalue[%d] = %d\n",i,List->head->value);
        //}
        if (List->size == 0) {
            List->head = (node_t*)malloc(sizeof(node_t));
        }

        if (i > 0 && List->head->value > 0 && asteroids[i] < 0) {
            printf("a[%d] = %d\n", i, asteroids[i]);
            printf("size[%d] = %d\n", i, List->size);
            List = neutralized(List, asteroids[i]);
            printf("size[%d] = %d\n", i, List->size);
        }
        else {
            node_t* newhead = (node_t*)malloc(sizeof(node_t));
            newhead->value = asteroids[i];
            newhead->next = List->head;
            List->head = newhead;
            List->size++;
            printf("a1[%d], size = %d , = %d\n", i, List->size, List->head->value);
        }
    }
    printf("size = %d \n", List->size);
    if (List->size != 0) {
        *returnSize = List->size;
        int* res = malloc(sizeof(int) * (*returnSize));;
        for (int i = List->size - 1; i > -1; i--) {
            printf("i = %d\n", i);

            res[i] = List->head->value;
            List->head = List->head->next;

        }
        return res;
    }
    else {
        *returnSize = 0;
        return NULL;
    }

}

struct Stack* neutralized(struct Stack* stack, int val) {
    printf("root3->value = %d > val = %d\n", stack->head->value, val);
    while (stack->head != NULL && abs(stack->head->value) <= abs(val)) {
        printf("root1->value = %d > val = %d\n", stack->head->value, val);

        if (abs(stack->head->value) == abs(val) && val < 0 && stack->head->value>0) {
            printf("root->value = %d > val = %d\n", stack->head->value, val);
            struct node* Pdelete;
            Pdelete = stack->head;
            stack->head = stack->head->next;
            free(Pdelete);
            stack->size--;
            return stack;
        }
        else if (stack->head->value > 0 && val < 0 && abs(stack->head->value) < abs(val)) {
            printf("root2->value = %d > val = %d\n", stack->head->value, val);
            struct node* Pdelete;
            Pdelete = stack->head;
            stack->head = stack->head->next;
            free(Pdelete);
            stack->size--;
            if (stack->size == 0 || stack->head->value < 0) {
                node_t* newhead = (node_t*)malloc(sizeof(node_t));
                newhead->value = val;
                newhead->next = stack->head;
                stack->head = newhead;
                stack->size++;
                return stack;
            }
            //return stack;
        }
        else if (stack->head->value < 0 && val < 0) {
            //printf("root4->value = %d > val = %d\n",stack->head->value,val);
            node_t* newhead = (node_t*)malloc(sizeof(node_t));
            newhead->value = val;
            newhead->next = stack->head;
            stack->head = newhead;
            stack->size++;
            return stack;
        }

    }
    return stack;
}

void printnode(struct node* root) {
    printf("linkedlist = ");
    while (root != NULL) {
        printf(" ,%d", root->value);
        root = root->next;
    }
    printf("\n");
}
