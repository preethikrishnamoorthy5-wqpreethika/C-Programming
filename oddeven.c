#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        if(arr[i]%2!=0){
            odd++;
        }
    }
    if(odd==even){
        printf("Neither even nor odd.");
    }
    if(odd>even){
        printf("Odd divisible");
    }
    if(odd<even){
        printf("Even divisible");
    }
}