#include<stdio.h>
int main(){
    int arr1[3][3];
    /* arr2[3][3];*/
    int transpose[3][3];
    
    for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    /* printf("Enter elements for matrix 2\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }*/
    printf("Matrix 1\n");
    for(int i=0;i<=2;i++){
        for(a j=0;j<3;j++){
            
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            
            transpose[i][j]=arr1[j][i];
        }
    }
    printf("Transpose\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    /*printf("Matrix 2\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }*/

   
   /* for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    } 
    printf("SUM OF MATRIX\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }*/
   
    /*for(int i=0;i<=2;i++){
        int sum=0;
        for(int k=0;k<3;k++){
          for(int j=0;j<3;j++){
            
              sum=sum+(arr1[i][j]*arr2[j][k]);
            
          }
          prod[i][k]=sum;
        }
    }
    printf("PRODUCT\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<3;j++){
            
            printf("%d ",prod[i][j]);
        }
        printf("\n");
    }*/
    /*printf("ROW MAJOR\n");
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
    }*/
    return 0;

}
