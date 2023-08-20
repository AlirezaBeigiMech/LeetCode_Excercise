typedef struct node {
    char value;
    struct node* next;
    struct node* prev;
} node_t;

char* removeStars(char* s) {

    int count = 0;
    int finalcount = 0;

    node_t* head = (node_t*)malloc(sizeof(node_t));
    node_t* temp1 = head;


    for (int i = (strlen(s) - 1); i > -1; i--) {
        //printf("n = %d\n",i);
        if (s[i] == 42) {
            count++;
            //printf("n1 = %d\n",i);
        }
        else if (count > 0) {
            count--;
        }
        else if (count == 0) {
            head->value = s[i];
            head->next = (node_t*)malloc(sizeof(node_t));
            head = head->next;
            finalcount++;
        }
    }

    for (int i = 0; i < finalcount; i++) {
        s[finalcount - i - 1] = temp1->value; // Filling with letters 'A' to 'T'
        temp1 = temp1->next;
    }

    s[finalcount] = '\0';
    return s;
}