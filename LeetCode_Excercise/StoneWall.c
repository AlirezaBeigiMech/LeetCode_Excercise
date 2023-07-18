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


int solutionStoneWall(int H[], int N) {
    // Implement your solution here
    node_t* head = (node_t*)malloc(sizeof(node_t));
    int count = 0;
    create_list(head, 0);
    for (int i = 0; i < N; i++) {
        while (head->value > H[i]) {
            head = remove_item(head);
        }
        if (head->value != H[i]) {
            head = add_item(head, H[i]);
            count++;
        }
    }


    return count;
}