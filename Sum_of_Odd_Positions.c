#include<stdio.h>
int main()
{
    int i,n,osum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
          osum=osum+arr[i];  
        }
    }
    printf("%d",osum);
}