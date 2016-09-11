#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,n;
    a=0;b=1;
    printf("enter the number(upto) for fibonacci series: ");
    scanf("%d",&n);
    if(n>=1)
    {
    printf("%d %d ",a,b);
    }
    c=a+b;
    while(n>c)
    {
    c=a+b;
    a=b;
    b=c;
    printf(" %d ",c);
    n--;
    }
    return 0;
}
