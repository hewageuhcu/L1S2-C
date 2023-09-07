if(n!=p){
    printf("cannot multiply");

}
else{
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            sum=0;
            for(k=0;k<m;k++){
                sum=sum+a[i][k]*b[k][j];

            }
            c[i][j]=sum;
        }
    }
}
