#include<stdio.h>
#include<conio.h>
int main()
{
    int i,
    a[10],gr;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    gr=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>gr)
            gr=a[i];
    }
    printf("greatest among 10 is: %d",gr);
    return 0;
}
