#include<stdio.h>
#include<string.h>
int main(){
    int i,n;
    char word[100];
    printf("Enter the word:\n");
    scanf("%s",word);
    printf("The word is:\n");
    printf("%s\n",word);

    n= strlen(word);

    printf("The required word is:\n");
    for(i=0;i<n;i++){
        if((word[i]=='a')||(word[i]=='e')||(word[i]=='i')||(word[i]=='o')||(word[i]=='u')){
            continue;
        }
        printf("%c",word[i]);
    }

}

