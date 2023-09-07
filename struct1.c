#include <stdio.h>


struct Student {
    int index;
    char name[50];
    int marks;
    }s1;

int main() {

    printf("Enter student index number : ");
    scanf("%d",&s1.index);
    printf("Enter student name : ");
    scanf("%s",&s1.name);
    printf("Enter student marks : ");
    scanf("%d",&s1.marks);
    printf("student index number : %d\n",s1.index);
    printf("student name : %s\n",s1.name);
    printf("student marks : %d\n",s1.marks);
}
