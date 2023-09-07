#include<stdio.h>

int main(){
	int arr[5][5];

	int i, j, max;
	 printf("Enter Elements :\n\n ");
	 scanf("%d",&i);
	 scanf("%d\n",&j);
    for (i = 0; i<5; i++)
		for (j = 0; j<5; j++)
			if (arr[i][j]>max)
				max = arr[i][j];

	printf("Largest Number : %d", max);
    return 0;
}