#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int s=arr[0],l;
    for(int i=1;i<n;i++){
        if(s<arr[i])
        s=arr[i];
        else l=arr[i];
    }
    printf("The largest element is %d \nThe smallest element is %d",s,l);
}