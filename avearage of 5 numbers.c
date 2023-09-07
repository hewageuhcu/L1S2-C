#include<stdio.h>


float average(void);
float avearage(){
float n1, n2, n3, n4, n5, avg; 
 printf( "Enter five numbers: ");
  scanf ("%f%f%f%f%f",&n1, &n2, &n3, &n4, &n5);
 avg = (n1 + n2 + n3 + n4 + n5)/5;
return avg;
}
void main(){
    float  a=average();
 printf("Average = %f",a);

}