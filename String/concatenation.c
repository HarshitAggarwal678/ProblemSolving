#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char a[20];
    char b[20];
    char c[40];
    gets(a);
    gets(b);
    int i=0;
    int j=0;
    int k=0;
    while(a[i]!='\0')
    {
        c[k]=a[i];
        k++;
        i++;
    }
    //k=k-1;
    while(b[j]!='\0')
    {
        c[k]=b[j];
        k++;
        j++;
    }
    c[k]='\0';
    printf("%s\n",c);
    printf("%d",strlen(c));
}