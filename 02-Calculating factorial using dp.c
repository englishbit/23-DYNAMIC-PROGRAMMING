#include<stdio.h>
#define MAX 1000

//logic for finding the factorial
long long fact(int x){
    long long fact[MAX];

    fact[0]=1;
    for(int i=1;i<=x;i++){
        fact[i]=fact[i-1]*i;
    }
    
    return fact[x];
}
int main(){

    //logic for taking input
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<0 || n>1000){
        printf("wrong input\n");
        return -1;
    }

    //logic for printing output
    printf("%lld",fact(n));
    printf("\n");

    return 0;
}