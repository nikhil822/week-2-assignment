#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    while(n>0){
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("The sum of the digits is %d",sum);
    return 0;
}