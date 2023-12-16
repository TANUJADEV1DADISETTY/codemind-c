#include<stdio.h>
int main()
{
    int i,n,avg,sum,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);\n        sum=sum+arr[i];
    }
    for(i=0;i<n;i++)
    {
        avg=sum/n;
        if(avg==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}