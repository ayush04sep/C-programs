#include<stdio.h>
#include<conio.h>
int main()
{
    int n,temp,sum=0,rem;
    printf("enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        rem=n%10;
        sum=sum+fact(rem);
       // printf("\n %d ",sum);
        n/=10;
    }
    if(sum==temp)
        printf("number is magic ");
    else
        printf("number is not magic");
}
int f=1;
fact(int rem)
{
    if(rem)
        return rem*fact(rem-1);
    return 1;
}
