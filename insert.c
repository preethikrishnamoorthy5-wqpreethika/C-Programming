#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num,pos;
    scanf("%d %d",&num,&pos);
    if(pos<0||pos>n){
        printf("Invalid");
    }
    else{
        for(int i=n;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=num;
        n++;
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
}