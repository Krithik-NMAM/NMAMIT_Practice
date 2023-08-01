//Multiplication table

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Multiplication Table:\n");
    for(i=1;i<=10;i++)
    {
        int product=(n*i);
        printf("%d\n",product);
    }


    return 0;
}
