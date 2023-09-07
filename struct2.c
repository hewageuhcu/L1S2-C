#include <stdio.h>
#include<math.h>

struct cal {
    int feet;
    float inch;
    }w[2];

int main() {
    float temp,sum_inch=0;int sum_feet=0;
    for(int i=0;i<=1;i++){
    printf("Enter information for %d chance\n",i+1);
    printf("Enter feet : ");
    scanf("%d",&w[i].feet);
    printf("Enter inch : ");
    scanf("%f",&w[i].inch);
    sum_inch+=w[i].inch;
    sum_feet+=w[i].feet;
    }
    if(sum_inch>=12){

        sum_feet+=sum_inch/12;
        sum_inch=fmod(sum_inch,12);
    }
    printf("Sum of distance=%d'-%.1f\"",sum_feet,sum_inch);
}
