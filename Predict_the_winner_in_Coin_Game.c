#include<stdio.h>
int main()
{
    int M,N;
    scanf("%d%d",&M,&N);
    if(M%2==0 || N%2==0)
    {
        printf("Player 1");
    }
    else if(M%2==1 || N%2==1)
    {
        printf("Player 2");
    }
    else
    {
        printf("There's no move to make");
    }
}