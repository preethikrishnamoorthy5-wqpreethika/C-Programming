#include<stdio.h>
int main(){
    int n1,n2,temp;
    scanf("%d %d",&n1,&n2);
    int n3=n1+n2;
    int arr1[n1],arr2[n2],arr3[n3];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        arr3[i+n1]=arr2[i];
    }
    for(int i=0;i<n3;i++){
        for(int j=i+1;j<n3;j++){
            if(arr3[i]<arr3[j]){
                temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }for(int i=0;i<n3;i++){
    printf("%d ",arr3[i]);
    }
}