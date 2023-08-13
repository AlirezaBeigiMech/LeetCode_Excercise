#include "main.h"
#include "List.h"


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