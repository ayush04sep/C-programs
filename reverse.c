#include<stdio.h>
#include<conio.h>
int main()
{
    int n,rev;
    printf("enter the value of n: ");
    scanf("%d",&n);
    rev=reverse(n);
    /*while(n!=0)
    {
        rev=10*rev+n%10;
        n=n/10;
    }*/
    printf("reverse of number is %d",rev);
    return 0;
}
int rev=0;
reverse(int n)
{
    if(n!=0)
    {
        rev=10*rev+n%10;
        reverse(n/10);
    }
    else
        return rev;
    return rev;

}
