#include "List.h"




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
