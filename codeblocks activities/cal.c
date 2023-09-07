#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,e,D,x;
    e=a*(x*x)+b*x+c;
    printf("Enter euqation : ");
    if (a<=0)
        return 1;
     else
    scanf("%d",&e);
    D=(b*b)-4*a*c;
    if (D<0){
        printf("roots are Imaginary");
    }
    else if (D=0){
        int Root=-b/2*a;
        printf("Root is %d",Root);
    }
    else {
    int Root1= -b + sqrt(b^2-4*a*c)/2*a;
    int Root2= -b - sqrt(b^2-4*a*c)/2*a;
    printf("Roots are %d and %d",Root1,Root2);
}
}
