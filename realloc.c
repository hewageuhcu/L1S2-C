#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    int* num;

    printf("Enter the value of n: ");
    scanf("%d", &n);

   
    num = (int*) malloc(n * sizeof(int));

    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        sum = sum+num[i];
    }

    
    num = (int*) realloc(num, (n + 10) * sizeof(int));

   
    printf("Enter %d more numbers:\n", n + 10);
    for (i = n; i < n + 10; i++) {
        scanf("%d", &num[i]);
        sum = sum+num[i];
    }

    printf("The sum of all %d numbers : %d\n", n + 10, sum);

    
    free(num);

    return 0;
}
