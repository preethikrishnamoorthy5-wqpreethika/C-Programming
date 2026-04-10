#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }int sum=0;
    for(int i=0;i<n;i++){
        sum=arr[1]+arr[n-1]+arr[n-2];
    }
    printf("%d",sum);
}