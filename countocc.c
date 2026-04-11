#include<stdio.h>
int main(){
    int n,occ;
    scanf("%d %d",&n,&occ);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        
            if(arr[i]==occ){
                count++;
            }
        
    }printf("%d",count);
    printf("\n");
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    printf("\n");
    int pro=1;
    for(int i=0;i<n;i++){
        pro*=arr[i];
    }
    printf("%d",pro);
}