#include<stdio.h>
#include<math.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int n=a;
    int x=a;
    int c=0,sum=0;;
    while(a>0)
    {
        c++;
        a/=10;
    }
    while(n>0)
    {
        int r=n%10;
        sum+=pow(r,c);
        n/=10;
    }
    if(sum==x)
    {
        printf("Armstrong");
    }
    else 
    {
        printf("No");
    }
    
}
