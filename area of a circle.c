#include<stdio.h>
float area(void);
float area(){
float pi = 3.14;
  float r;
  float a;
   printf ("Enter radius");
  scanf ("%f", &r);
  
    float a = pi * r * r;
    return a;
  }

void main(){
 float a;
 float a=area();
  printf ("Area is %f", a);

}





