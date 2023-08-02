#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int armstrong(){
        int o,n,len=0,nn=0,last;
  printf("Enter the number:\n");
  scanf("%d",&n);
  o=n;

  while(n>=1){
    n=n/10;
    len++;
  }
  printf("Number of digits is %d\n",len);

  n=o;
  while(n>=1){
        last= n%10;
        nn= nn+pow(last,len);
        n=n/10;
  }

  if(o==nn){
    printf("The number is Armstrong number:\n ");
  }
  else{
    printf("The number is not Armstrong number\n");
  }


}
int main()
{

  armstrong();

}
