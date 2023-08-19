// Define the stack node structure
typedef struct node {
    int value;
    struct node* next;
} node_t;

typedef struct {
    int size;
    struct node* head;
    struct node* tail;
} RecentCounter;


RecentCounter* recentCounterCreate() {

    node_t* head = (node_t*)malloc(sizeof(node_t));
    node_t* tail = (node_t*)malloc(sizeof(node_t));
    RecentCounter* list = (RecentCounter*)malloc(sizeof(RecentCounter));
    tail = head;
    list->head = head;
    list->tail = tail;
    list->size = 0;
    return list;
}


// Function to push a value onto the stack
int recentCounterPing(RecentCounter* list, int t) {
    // Create a new node
    if (list->size == 0) {
        list->head->value = t;
        list->head->next = (node_t*)malloc(sizeof(node_t));
        list->tail = list->head;
        list->head->next = (node_t*)malloc(sizeof(node_t));

    }
    else {
        //list->tail->next = (node_t*)malloc(sizeof(node_t));

        list->tail->next = (node_t*)malloc(sizeof(node_t));
        list->tail->next->value = t;
        list->tail = list->tail->next;
    }
    list->size++;
    int count = list->size;
    int low = t - 3000;
    //node_t* current = list->head;
    while (list->head->value < low) {
        //printf("Stack value: %d\n", list->head->value);
        node_t* Pdelete;
        Pdelete = list->head;
        list->head = list->head->next;
        free(Pdelete);
        list->size--;
        //list->size--;
        //current = current->next;

    }
    return list->size;
}
void recentCounterFree(RecentCounter* obj) {
    //StackNode* current = obj->head;
    free(obj);

}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj, t);

 * recentCounterFree(obj);
*/