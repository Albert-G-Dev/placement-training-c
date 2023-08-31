#include<stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int Esum=0,Osum=0;
    while(a>0)
    {
        int r=a%10;
        if(r%2==0)
        {
            Esum+=r;
        }
        else 
        {
            Osum+=r;
        }
        a/=10;
    }
    int ans=0;
    if(Esum>Osum)
    {
        ans=Esum-Osum;
    }
    else  
    {
        ans=Osum-Esum;
    }
    printf("%d",ans);
}
