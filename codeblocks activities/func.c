#include<stdio.h>
int tCharge(int x);

int tCharge(int x){
    int i,h;
    printf("enter num of hours");
    scanf("%d",&h);
    if(h>0&&h<=3){
    int totalPrice=200*h;
    printf("price is %d ", totalPrice);
    }
    else
    {
    int totalPrice=200*h+50*(h-3);
    }
    printf("price is %d ", totalPrice);
    return totalPrice;
}
int main(){
char custName;
int Etime, Ltime,a;
int tCharge(a);
printf("enter customer name");
scanf("%c",&custName);
printf("enter entered time");
scanf("%d",&Etime);
if(Etime<0||Etime>24)
printf("invalide time");
printf("enter leaving time");
scanf("%d",&Ltime);
if(Ltime<0||Ltime>24)
printf("ïnvalid time");

}
