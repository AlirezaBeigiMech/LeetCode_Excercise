#include <stdlib.h>


typedef struct node {
    int value;
    struct node* next;
} node_t;

static void create_list(struct node* root, int value);
struct node* add_item(struct node* root, int value);
struct node* remove_item(struct node* root);

static void create_list(struct node* root, int value) {
    root->next = NULL;
    root->value = value;

}

// once

