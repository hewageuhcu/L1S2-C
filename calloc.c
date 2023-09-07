#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *number, sum = 0;

    printf("Enter the number of integers to sum: ");
    scanf("%d", &n);

    
    number = (int*) calloc(n, sizeof(int));

    if (number == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

   
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &number[i]);
    }

    
    for (int i = 0; i < n; i++) {
        sum = sum+number[i];
    }

    printf("The sum of %d integers is %d\n", n, sum);

    free(number);

    return 0;
}
