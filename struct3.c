#include <stdio.h>


struct Student {
    int rollNo;
    char name[50];

    }s1;

int main() {
    printf("Enter student's name : ");
    gets(s1.name);
    printf("Enter roll number : ");
    scanf("%d",&s1.rollNo);
    printf("Output\n");
    printf("Name: %s\n",s1.name);
    printf("Roll: %d\n",s1.rollNo);
}
