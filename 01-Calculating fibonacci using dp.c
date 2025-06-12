#include<stdio.h>
#define MAX 1000

//logic for finding the fibonacci
long long fib(int x){
    long long fib[MAX];
    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<=x;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    
    return fib[x];
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
    printf("%lld",fib(n));
    printf("\n");

    return 0;
}