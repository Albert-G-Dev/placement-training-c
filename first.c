#include<stdio.h>
#include<math.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int a=n;
    int last=n%10;
    int c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
    int p=pow(10,c-1);
    int first=a/p;
    printf("%d",first+last);
}

