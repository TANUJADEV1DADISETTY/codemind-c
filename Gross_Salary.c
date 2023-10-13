#include<stdio.h>
int main()
{
    int x,da,hra;
    scanf("%d",&x);
    if(x<=10000)
    {
        da=x*0.8;
        hra=x*0.2;
    }
    else if(x<=20000)
    {
        da=x*0.9;
        hra=x*0.25;
    }
    else
    {
        da=x*0.95;
        hra=x*0.3;
    }
    float grosssalary=x+da+hra;
    printf("%.2f",grosssalary);
}