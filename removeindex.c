#include<stdio.h>
int main(){
    int n,in;
    scanf("%d %d",&n,&in);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i==in){
            continue;
        }
        printf("%d ",arr[i]);
    }
}