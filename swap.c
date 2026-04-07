#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        temp=arr[0];
        arr[0]=arr[n-2];
        arr[n-2]=temp;
    }
    for(int i=0;i<n;i++){
        temp=arr[1];
        arr[1]=arr[n-1];
        arr[n-1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
