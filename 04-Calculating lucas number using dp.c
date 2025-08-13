#include<stdio.h>

//logic for calculating the lucas nubmer
int lucas(int n){
    if(n==0)return 2;
    if(n==1)return 1;

    int lucas[n+1];
    lucas[0]=2;
    lucas[1]=1;

    for(int i=2;i<=n;i++){
        lucas[i]=lucas[i-1]+lucas[i-2];
    }


    return lucas[n];
}

int main(){
    int n;
    scanf("%d",&n);
    
    //logic for special case
    if(n<0){
        printf("Invalid input\n");
        return -1;
    }

    //logic for special case
    printf("The %dth lucas number is:%d\n",n,lucas(n));

    return 0;
}

