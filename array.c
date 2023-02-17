#include<stdio.h>
int main(){
    int arr[2][2];
    printf("Enter elements\n");
    for(int i=0;i<=1;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix\n");
    for(int i=0;i<=1;i++){
        for(int j=0;j<2;j++){
            
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("ROW MAJOR\n");
    for(int i=0;i<=1;i++){
        for(int j=0;j<2;j++){
            int c=(&arr[0][0])+(sizeof(int)*(((i-0)*2)+(j-0)));
            printf("%d ",c);
        }
        printf("\n");
    }
    printf("\nColumn major\n");
    for(int i=0;i<=1;i++){
        for(int j=0;j<2;j++){
            int c=(&arr[0][0])+(sizeof(int)*((i-0)+((j-0)*2)));
            printf("%d ",c);
        }
        printf("\n");
    }

}