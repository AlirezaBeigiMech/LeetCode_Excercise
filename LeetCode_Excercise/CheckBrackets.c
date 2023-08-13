//#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "List.h"

int solutionCheckBrackets(char* S) {
    // Implement your solution here
    //printf("\nAnswer for  {} is = %d\n", S[3]);
    int N = strlen(S);
    node_t* head = (node_t*)malloc(sizeof(node_t));
    if (N == 0) {
        return 1;
    }
    else if (S[0] == 93 || S[0] == 41 || S[0] == 125) {
        return 0;
    }
    else {

        create_list(head, (int)S[0]);
        //printf("Added, %d\n",  S[0]);
    }
    for (int i = 1; i < N; i++) {
        if (S[i] == 41 && head->value == 40) {
            head = remove_item(head);
            //printf("removed, %d\n",  S[i]);
        }
        else if (S[i] == 93 && head->value == 91) {
            head = remove_item(head);
        }
        else if (S[i] == 125 && head->value == 123) {
            head = remove_item(head);
        }
        else if (S[i] == 123 || S[i] == 40 || S[i] == 91) {
            if (head->value == 0) {
                head = (node_t*)malloc(sizeof(node_t));
                create_list(head, (int)S[i]);
            }
            else {
                head = add_item(head, (int)S[i]);
            }

            //printf("added, %d\n",  S[i]);
        }
        else {
            return 0;
        }
        //printf("this is a debug message, %d, %d\n", i, head->value );
    }
    //printf("this is a debug message, %d, %d\n", head->value );
    if (head->value == 0) {
        return 1;
    }
    else {
        return 0;
    }

}