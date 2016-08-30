#include<stdio.h>
#include<conio.h>
int main()
{
    int fact,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    fact=factorial(n);
    /*while(n)
    {
        fact=fact*n;
        n--;
    }*/
    printf("factorial of the given number is: %d",fact);
    return 0;
}
int f=1;
factorial(int n)
{
    if(n)
        return n*factorial(n-1);
    return 1;
}
