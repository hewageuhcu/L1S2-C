#include <stdio.h>
int tot(int );
int main(){
int tot(int n)
{
    int sum=0;
    printf("enter n");
    scanf("%d",&n);
    sum=n+tot(n-1);
   printf("%d",sum);

}
}
