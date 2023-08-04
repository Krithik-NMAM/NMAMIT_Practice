#include<stdio.h>
int main(){
    int i,n, a[100];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("The entered elements are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    bubble_sort(a,n);
}

void bubble_sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("\nThe sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
