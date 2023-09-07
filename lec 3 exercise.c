//Write a program in C to store 10 elements in an array and print it.
#include <stdio.h>

void display (int);
int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int i;
   for(i=0;i<10;i++)
       display (arr[i]);
   
   return 0;
}
void display (int m){
    printf("%d\n",m);
}


//Extend the above program and write a program in C to find the sum of all elements of the array.
#include <stdio.h>

void display (int);
int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int i;
   int sum=0;
   for(i=0;i<10;i++)
       display (arr[i]);
       for(i=0;i<10;i++)
       sum =sum+i;
   printf("sum is %d\n",sum);
   return 0;
}
void display (int m){
    printf("%d\n",m);
}
//Write a program in C to read n number of values in an array and display it in reverse order.
#include <stdio.h>

void display (int);
int main()
{
   int arr[]={1,2,3,4,5,6,7,8,9,10};
   int i;
   for(i=9;i>=0;i--)
       display (arr[i]);
       
  
   return 0;
}
void display (int m){
    printf("%d\n",m);
}
    
//Write a program to enter marks of 25 students for a particular subject using arrays.
#include<stdio.h>
int main(){
int arr[25];
return 0;
}

/*	Extend the above program, 
	to read and print the marks of each student. */
#include<stdio.h>
void display(int);
int main(){
int arr[25];
int n,i;
for(n=0;n<25;n++){
 printf("Enter marks %d\n", arr[i]);
 scanf("%d",&n);
}

return 0;
}
void display(int m){
    printf("%d",m);
}

//to get the average mark for the subject.
#include<stdio.h>

int main(){
int arr[25];
int n,i;
float avg;
for(n=0;n<25;n++){
 printf("Enter marks %d\n", arr[i]);
 scanf("%d",&n);
 avg=(float)arr[i]/25;
 printf("Average is %f", avg);
}
return 0;
}
    

