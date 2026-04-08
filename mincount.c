#include<stdio.h>
int main(){
    int n1,n2,sum1=0,sum2=0;
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n1;i++){
        sum1+=arr1[i];
    }
    for(int i=0;i<n2;i++){
        sum2+=arr2[i];
    }
    for(int i=0;i<n2;i++){
        for(int j=i+1;j<n2;j++){
            if(arr2[i]<arr2[j]){
                int temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    int count=0;
    for(int i=0;i<n2;i++){
        if(sum1<sum2){
            sum1+=arr2[i];
            count++;
            if(sum1>=sum2){
                break;
            }
        }
    }
            printf("%d",count);
        
}