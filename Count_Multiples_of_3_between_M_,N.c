#include<stdio.h>
int main()
{
    int i,m,n,dc=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        {
            dc=dc+1;
        }
    }
    printf("%d",dc);
}