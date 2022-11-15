#include<stdio.h>
void main()
{
    char a[20];
    scanf("%s",a);
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    printf("lenth =%d",i);
}