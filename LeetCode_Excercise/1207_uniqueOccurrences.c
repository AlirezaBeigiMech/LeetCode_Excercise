#include <stdbool.h>
bool uniqueOccurrences(int* arr, int arrSize) {
    int array[2001] = { };
    int arraynext[1001] = { };
    for (int i = 0; i < arrSize; i++) {
        array[1000 + arr[i]] ++;
    }
    for (int i = 0; i < arrSize; i++) {
        if (array[1000 + arr[i]] != -1) {
            if (arraynext[array[1000 + arr[i]]] == 1) {
                return false;
            }
            else {
                arraynext[array[1000 + arr[i]]] = 1;
                array[1000 + arr[i]] = -1;
            }
        }
    }
    return true;
}