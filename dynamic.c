#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int last=n%10;
    int first=0;
    while (n>0)
    {
     first=n;
     n/=10;

    }
   printf("%d",first+last); 

}
