#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        pro=pro*d;
        n=n/10;
    }
    if(pro==sum)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    return 0;
}