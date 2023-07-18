// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include "main.h"
typedef struct node {
    int value;
    struct node* next;
} node_t;
static void create_list(struct node* root, int value);
struct node* add_item(struct node* root, int value);


static void create_list(struct node* root, int value) {
    root->next = NULL;
    root->value = value;

}
struct node* add_item(struct node* root, int value) {
    node_t* temp = (node_t*)malloc(sizeof(node_t));
    temp->next = (node_t*)malloc(sizeof(node_t));
    temp->value = value;
    temp->next = root;
    return temp;
}
struct node* remove_item(struct node* root) {
    if (root->next != NULL) {
        root = root->next;
    }
    else {
        free(root);
    }
    return root;
}



int solutionDominator(int A[], int N) {
    // Implement your solution here
    node_t* head = (node_t*)malloc(sizeof(node_t));
    int k = -1;
    int j = 0;
    if (N == 0) {
        return -1;
    }
    int i = 0;
    if (j == 0) {
        //printf("i1 = %d\n",i);
        create_list(head, A[i]);
        k = i;
        j++;
    }
    //printf("j = %d\n",j);
    for (i = 1; i < N; i++) {
        //printf("value = %d\n",head->value);
        if (j == 0) {
            head = add_item(head, A[i]);
            k = i;
            j++;
        }

        else if (head->value == A[i]) {
            //printf("i2 = %d\n",i);
            head = add_item(head, A[i]);
            //*(C+k) = i;
            k = i;
            j++;
        }
        else {
            //printf("i3 = %d\n",i);
            head = remove_item(head);
            j--;
        }
        //printf("j = %d\n",j);
        //printf("head->value = %d\n",head->value);
    }


    if (j < 1) {
        return -1;
    }
    else {
        return k;
    }
    //return k;

}