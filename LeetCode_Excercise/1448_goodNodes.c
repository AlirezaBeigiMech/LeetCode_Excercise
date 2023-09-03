/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;

};

typedef struct node {
    int value;
    struct node* next;
} node_t;

typedef struct Stack {
    int size;
    struct node* head;
} Stack_t;

void addStack(Stack_t* stack, int value) {
    if (stack->size == 0) {
        stack->head = (node_t*)malloc(sizeof(node_t));
        stack->size = 1;
        stack->head->value = value;
        stack->head->next = NULL;
    }
    else {
        node_t* temp = (node_t*)malloc(sizeof(node_t));
        temp->value = value;
        temp->next = stack->head;
        stack->head = temp;
        stack->size = stack->size + 1;
    }
}

void printStack(Stack_t* stack) {
    node_t* temp = stack->head;
    for (int i = 0; i < stack->size; i++) {
        printf("stack%d->val = %d\n", i, temp->value);
        temp = temp->next;
    }
}
void countMax(struct TreeNode* root, Stack_t* stack, int max);

int goodNodes(struct TreeNode* root) {
    Stack_t* stack = (Stack_t*)malloc(sizeof(Stack_t));
    stack->size = 0;
    int max = root->val;
    countMax(root, stack, max);
    return stack->size;
}

void countMax(struct TreeNode* root, Stack_t* stack, int max) {
    if (root->val >= max) {
        addStack(stack, root->val);
        max = root->val;
    }
    if (root->left != NULL) {
        countMax(root->left, stack, max);
    }
    if (root->right != NULL) {
        countMax(root->right, stack, max);
    }

}