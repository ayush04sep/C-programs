#include<stdio.h>
#include<conio.h>
int main()
{
    int n,temp,rev=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    temp=n;
    rev=reverse(n);
    if(temp==rev)
        printf("number is palindrome");
    else
        printf("number is not palindrome");
    return 0;
}
int rev=0;
reverse(int n)
{
    if(n)
        {
            rev=rev*10+n%10;
            reverse(n/10);
        }
    else
        return rev;
    return rev;
}
