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

void listTree(struct TreeNode* root, Stack_t* stack);

bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {

    Stack_t* stack1 = (Stack_t*)malloc(sizeof(Stack_t));
    Stack_t* stack2 = (Stack_t*)malloc(sizeof(Stack_t));
    stack1->size = 0;
    stack2->size = 0;
    listTree(root1, stack1);
    listTree(root2, stack2);
    if (stack1->size != stack2->size) {
        return 0;
    }
    else {
        node_t* temp1 = stack1->head;
        node_t* temp2 = stack2->head;
        for (int i; i < stack1->size; i++) {
            if (temp1->value != temp2->value) {
                return 0;
            }
            else {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }

        }
    }
    printStack(stack1);
    printStack(stack2);

    return 1;

}

void listTree(struct TreeNode* root, Stack_t* stack) {
    if (root->right == NULL && root->left == NULL) {
        addStack(stack, root->val);
    }
    if (root->left != NULL) {
        listTree(root->left, stack);
    }
    if (root->right != NULL) {
        listTree(root->right, stack);
    }


}