#include<stdio.h>
#include<string.h>
int main(){
    int i,n,j;
    char word[100];
    printf("Enter the word:\n");
    scanf("%s",word);
    printf("The word is:\n");
    printf("%s",word);

    n= strlen(word);

    printf("\nThe required word is:\n");
    for(i=0;i<n;i++){
        if((word[i]=='a')||(word[i]=='e')||(word[i]=='i')||(word[i]=='o')||(word[i]=='u')||(word[i]=='A')||(word[i]=='E')||(word[i]=='I')||(word[i]=='O')||(word[i]=='U')){
            for(j=i;j<n;j++){
                word[j]=word[j+1];
            }
            i=i-1;
            n=n-1;
        }

    }
    printf("%s",word);

}


