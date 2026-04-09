#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=1;
        if(arr[i]<=1){
            count=0;
        }
        for( int j=2;j*j<=arr[i];j++){
            if(arr[i]%j==0){
                count=0;
            }
        }
        if(count==0){
            printf("%d ",arr[i]);
        }
    }
}