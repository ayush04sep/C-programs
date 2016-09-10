#include<stdio.h>
#include<conio.h>
int main()
         {
          int n=10;
          print(n);
         }
print(int n)
{
    if(n==0)
        exit(0);

        printf("done\t");
        print(--n);
}
