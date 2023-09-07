#include <stdio.h>

int isTriangular(int num) {
    int sum = 0;
    int i;

    for (i = 1; sum < num; i++) {
        sum += i;
        if (sum == num) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int start = 1;
    int end = 50;
    int sum = 0;
    int i;

    for (i = start; i <= end; i++) {
        if (isTriangular(i)) {
            sum += i;
        }
    }

    printf("The sum of all triangular numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
