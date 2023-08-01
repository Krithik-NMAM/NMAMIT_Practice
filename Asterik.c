#include<stdio.h>

int main()
{
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Printing the Symbol:\n\n\n");
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if((i%2)!=0 || (j%2)!=0){
                printf("%d\t",a[i][j]);
            }
            else{
                printf("*\t");
            }
        }
        printf("\n");
    }
}

