#include<stdio.h>
#define MAX 1000

//logic for finding the tribonacci
long long trib(int x){
    long long trib[MAX];

    trib[0]=0;
    trib[1]=1;
    trib[2]=1;
    for(int i=3;i<=x;i++){
        trib[i]=trib[i-1]+trib[i-2]+trib[i-3];
    }
    
    return trib[x];
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
    printf("%lld",trib(n));
    printf("\n");

    return 0;
}