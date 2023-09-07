#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];
    int start_pos, num_chars, i, j;

    printf("Enter a string:");
    fgets(str, 100, stdin);

    printf("Enter the starting position: ");
    scanf("%d", &start_pos);
    
    num_chars = start_pos;

    if (num_chars == 0) {
        strcpy(substr, &str[start_pos]);
    } else {
        for (i = start_pos-1, j = 0; j < num_chars; i++, j++) {
            substr[j] = str[i];
        }
        substr[j] = '\0';
    }

    printf("The extracted substring is: %s", substr);

    return 0;
}
