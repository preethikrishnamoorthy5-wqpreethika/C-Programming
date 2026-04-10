#include<stdio.h>
int main(){
    int n,i,div;
    scanf("%d %d",&n,&div);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
           if(arr[i]%div==0){
            count++;
           }
        }
        if(count>0){
        printf("%d",count);}
        if(count==0){
            printf("Invalid");
        }

   
        
    
}