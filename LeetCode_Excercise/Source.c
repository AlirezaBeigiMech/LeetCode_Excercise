
#include "55_Jump_Game.h"
#include "main.h"
#include "printarray.h"


int main() {
    // Q 55, Answer of the Jump Game
    int nums[5] = { 3, 2, 1, 0, 4 };
    int nums1[5] = { 2, 3, 1, 1, 4 };
    int array189[5] = {3, 8, 9, 7, 6};
    int array136[5] = { 4, 1, 2, 1, 2 };


    int arrayPermCheck[4] = {4,1,2,3};
    int  numsSize = 5;
    bool a = canJump(nums, numsSize);
    bool a1 = canJump(nums1, numsSize);
    struct Results result = solutionCyclicRotation(array189, 5, 3);
    int resOddOccurrencesInArray = solutionOddOccurrencesInArray(array136, 5);

    //*(array136+2);
    int array1891[5] = { 3, 8, 9, 7, 6 };
    printArray(array1891, 5);
    printf("\narray 2 = %x\n", (array1891));
    // = (array1891 + 2);
    printf("\narray 2 \n");
    printArray(array1891, 4);
    printf("\narray 2 = %d\n", *(array1891+1));
    printf("Q55 Answer for { 3, 2, 1, 0, 4 } = %d\n", a);
    printf("Q55 Answer for { 2, 3, 1, 1, 4 } = %d\n", a1);
    printf("Q868 Answer for { 185 } or 10111001 = %d\n", solutionBinaryGap(185));
    printf("Q136 Answer for { 4, 1, 2, 1, 2 } = %d\n", resOddOccurrencesInArray);
    printf("Q189 Answer for  A = {3, 8, 9, 7, 6} and K = 3 is newA = \n" );

    printArray(result.A, 5);
    char s[5] = "{()}";
    printf("\nAnswer for  {} is = %d\n", s[3]);
    printf("\nAnswer for  {} is = %d\n", solutionCheckBrackets(s));
    
    printf("Q PermCheck Answer for  A = {4,1,2,3} = %d\n", solutionPermCheck(arrayPermCheck, 4));


    /*
    * Merge Two List
    * 
    */
    struct ListNode* list1 = malloc(sizeof(struct ListNode));
    struct ListNode* list2 = malloc(sizeof(struct ListNode));
    list1->val = 2;
    list1->next = malloc(sizeof(struct ListNode));
    list1->next->val = 7;
    list1->next->next = malloc(sizeof(struct ListNode));
    list1->next->next->val = 9;

    list2->val = 1;
    list2->next = malloc(sizeof(struct ListNode));
    list2->next->val = 6;
    list2->next->next = malloc(sizeof(struct ListNode));
    list2->next->next->val = 8;



    struct ListNode* list3 = mergeTwoLists(list1, list2);

    
 
    
    return 0;

}
