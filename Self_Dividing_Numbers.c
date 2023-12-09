#include<stdio.h>
int self(int n)
{
    int t=n,flag=1,r;
    while(n>0)
    {
        r=n%10;
        if(r==0 || t%r!=0)
        {
            flag=0;
            break;
        }
        n=n/10;
    }
    if(flag==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(self(i))
        {
            printf("%d ",i);
        }
    }
}