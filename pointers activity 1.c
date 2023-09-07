#include<stdio.h>
int main()
{
      int arr[5],*a,i,small;
      a=&arr[0];
      printf("Enter Elements :\n\n ");
      scanf("%d",&i);
      for(i=0;i<25;i++,a++)
            scanf("%d",a);
      a=&arr[0];
      small=*a;
      for(i=0;i<25;i++,a++)
            if(*a<small)
                  small=*a;
      printf("\nSmallest Element : %d",small);
      return 0;
}