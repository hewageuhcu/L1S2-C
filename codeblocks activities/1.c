#include <stdio.h>

int main(){
    int n, a, b,sum=0;
     for(n=100;n<1000;n++){
        a=n%10;
        b=(n/100)%10;
        sum=a+b;
        if(sum<10){
            printf("%d\n",n);
        }
     }
}
