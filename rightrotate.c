#include<stdio.h>
int main(){
    int n,rot;
    scanf("%d %d",&n,&rot);
    int arr[n],res[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        res[(i+rot)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",res[i]);
    }
}