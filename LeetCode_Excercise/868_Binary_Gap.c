// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

/*

A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.
For example, number 9 has binary representation 1001 and contains a binary gap of length 2. The number 529 has binary representation 1000010001 and contains two binary gaps : one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains one binary gap of length 1. The number 15 has binary representation 1111 and has no binary gaps.The number 32 has binary representation 100000 and has no binary gaps.
Write a function :
int solution(int N);
that, given a positive integer N, returns the length of its longest binary gap.The function
should return 0 if N doesn't contain a binary gap.
For example, given N = 1041 the function should return 5, because N has
binary representation 10000010001 and so its longest binary gap is of length 5. Given N = 32 the function should return 0, because N has binary representation '100000' and thus no binary gaps.

*/



int solutionBinaryGap(int N) {
    // Implement your solution here
    int M = 0;
    int F = 0;
    int number = 0;
    int countNumber = 0;
    int count = 0;
    int flag = 0;


    while (N > 0) {
        M = N % 2;

        if (M == 1 && flag == 0) {
            flag = 1;
        }


        if (F == 0 && M == 0 && flag == 1) {
            number++;
        }
        else if (F == 1 && M == 0 && flag == 1)
        {
            number++;
        }
        else if (F == 0 && M == 1 && flag == 1)
        {
            if (number > countNumber) {
                countNumber = number;
            }

            number = 0;
        }
        else if (F == 1 && M == 1 && flag == 1)
        {
            // do nothing
        }


        F = M;
        N = N / 2;
        count++;
    }
    return countNumber;


}