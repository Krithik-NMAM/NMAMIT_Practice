#include<stdio.h>
int main()
{
    int n=0,i=0;
    char a[100];
    printf("Enter a string:\n");
    scanf("%s",a);
    printf("\nThe entered string is:\n");
    printf("%s",a);

    while(a[i]!='\0')
    {
        n++;
        i++;
    }

    printf("\n\nThe length of the string is: %d\n",n);

    for(i=0;i<n;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }

    printf("\nThe changed string is:\n");
    printf("%s",a);
}
