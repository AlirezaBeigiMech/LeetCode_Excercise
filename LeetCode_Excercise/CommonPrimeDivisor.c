
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int checkDiv(int a, int gcdv) {

    if (gcdv == 1) {
        return 0;
    }
    else if (a == 1) {
        return 1;
    }
    else {
        gcdv = gcd(gcdv, a);
        a = a / gcdv;
        return checkDiv(a, gcdv);
    }
}

int solutionCommonPrimeDivisor(int A[], int B[], int Z) {
    // Implement your solution here
    int gcdvalue;//,gcdvalue1;
    //int c1,c2;
    int count = 0;
    for (int i = 0; i < Z; i++) {
        if (A[i] == B[i]) count++;
        else if (A[i] == 1 || B[i] == 1) continue;
        else {
            gcdvalue = gcd(A[i], B[i]);
            A[i] = A[i] / gcdvalue;
            B[i] = B[i] / gcdvalue;
            if (checkDiv(A[i], gcdvalue) && checkDiv(B[i], gcdvalue)) {
                count++;
            }
        }

    }
    return count;

}
