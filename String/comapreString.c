//Program for comparing two strings (User defined function)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void comapre(char *a,char*b)
{
    int i,j;
    i=strlen(a);
    j=strlen(b);
    int k=0,f=0;
    if(i==j)
    {
        while(a[k]!='\0')
        {
            if(a[k]!=b[k])
            {
                f++;
                break;
            }
            k++;
        }
    }
    else
    printf("no");
    if(f>0)
    printf("no");
    else
    printf("yes");
}
void main()
{
    char a[20];
    char b[20];
    gets(a);
    gets(b);
    comapre(a,b);
}