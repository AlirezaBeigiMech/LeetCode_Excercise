#include <stdbool.h>
bool isSubsequence(char* s, char* t) {

    int j = 0;
    for (int i = 0; i < strlen(t); i++) {
        if (t[i] == s[j]) {
            j++;
        }
        if (j == (strlen(s))) {
            return 1;
        }
    }
    if (j == (strlen(s))) {
        return 1;
    }
    else {
        return 0;
    }
}