#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int temp,n,sum=0;
    printf("enter the number n: ");
    scanf("%d",&n);
    temp=n;
    sum=arm(n);
    if(temp==sum)
        printf("number is armstrong");
    else
        printf("number is not armstrong");
    return 0;
}
int sum=0;
arm(int n)
{
    if(n)
    {
    sum=sum+pow((n%10),3);
    arm(n/10);
    }
    else
        return sum;
    return sum;
}
