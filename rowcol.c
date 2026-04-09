#include<stdio.h>
int main(){
    int n1,n2,i,j;
    scanf("%d %d",&n1,&n2);
    int arr[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
              scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n1;i++){
        int row=0;
        for(int j=0;j<n2;j++){
              row+=arr[i][j];
        }
        printf("%d ",row);
    }
    printf("\n");
    for(int j=0;j<n2;j++){
        int col=0;
        for(int i=0;i<n1;i++){
            col+=arr[i][j];
        }
        printf("%d ",col);
    }
}