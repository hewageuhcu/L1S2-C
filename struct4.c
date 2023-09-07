#include <stdio.h>


struct Student {
    char name[50];
    int marks;
    }s[10];

int main() {
    printf("\nEnter information of students:\n");
    for(int i=0;i<=9;i++){
    printf("For roll number %d\n",i+1);
    printf(" Enter name : ");
    getchar();
    fgets(s[i].name,50,stdin);
    printf(" Enter Marks: ");
    scanf("%d",&s[i].marks);
    }
    printf("Displaying information of students:\n");
    for(int i=0;i<=9;i++){
    printf("Information for roll number %d:\n",i+1);
    printf("Name: %s\n",s[i].name);
    printf("Marks: %d\n",s[i].marks);
}
}
