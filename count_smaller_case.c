#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,n,count;
    char a[100];
    printf("Enter the string:\n");
    scanf("%s",a);
    printf("The entered string is:\n");
    printf("%s",a);

    while(a[i]!='\0'){
        i++;
        n++;
    }

    for(i=0;i<n;i++){
            if(a[i]>='a'&& a[i]<='z'){
                count++;
            }

    }
    printf("\n\nThe number of smaller case alphabets in the string is:\n");
    printf("%d",count);


}
