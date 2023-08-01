#include <stdio.h>
#include <stdlib.h>

struct Results {
	int* A;
	int N; // Length of the array
};
struct ResultsC {
	int* C;
	int L; // Length of the array
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
struct Results solutionCountNonDivisible(int A[], int N);


// quick sort

#pragma once
