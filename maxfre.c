#include<stdio.h>
int main(){
    int n,co;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }int max=0,mafre=0;;
        for(int i=0;i<n;i++){
            int count=0;
        for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
    if(count>max){
        max=count;
        mafre=arr[i];
    }
    }
    printf("%d %d",mafre,max);
    
}