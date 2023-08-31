#include<stdio.h>

int main()
{
    int a=55;
     printf("Factors are : ");
    for(int i=1;i<=a;i++)
    {
        if(a%i==0){
           printf("\n%d ",i);
           for(int j=1;j<=i;j++)
    {
        if(i%j==0){
           printf("\n\t%d sub factors are :",j);
        }
    }
        }
    }
    return 4;
}