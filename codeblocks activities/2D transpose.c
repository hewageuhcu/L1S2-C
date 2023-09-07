#include<stdio.h>
#define N 50
int main(){
int a[N][N],i,j,m,n;
printf ("enter num of rows and columns");
scanf("%d%d",&m,&n);
printf("enter 1st matrix");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
printf("1st matrix is");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("transpose");
for(i=0;i<n;i++){
for(j=0;j<m;j++){

printf ("%d\t",a[j][i]);
}
printf("\n");
}
}
