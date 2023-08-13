#include <stdio.h>
#include <stdlib.h>
//#include "List.h"


struct Results {
	int* A;
	int N; // Length of the array
};
struct ResultsC {
	int* C;
	int L; // Length of the array
};

struct ListNode {
	int val;
	struct ListNode* next;

};




struct Results solutionCyclicRotation(int A[], int N, int K);
int solutionBinaryGap(int N);
int solutionOddOccurrencesInArray(int A[], int N);
int solutionPermCheck(int A[], int N);
struct ResultsC solutionMaxCounters(int N, int A[], int M);
int solutionDistinctNum(int A[], int N);
int solutionCheckBrackets(char* S);
int solutionDominator(int A[], int N);
int solutionStoneWall(int H[], int N);
int solutionCountFactor(int N);
int solutionMinPerimeterRectangle(int N);
int solutionflag(int A[], int N);
struct ResultsC solutionCountNonDivisible(int A[], int N);
int solutionCommonPrimeDivisor(int A[], int B[], int Z);
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2);


// quick sort

#pragma once
