#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20]={'n','a','m','a','n'},str2[20]={'n','a','m','a','n'};
    //sacnf()
    printf("%s %s",str1,str2);
    if(strcmp(str1,str2))
    {
        printf("same");
    }
    //printf("  %d",a);
    return 0;
}
