#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n],sum=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        if(i%2==0)
        sum+=arr[i];
        if(arr[i]%2==0 && i%2!=0)
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}