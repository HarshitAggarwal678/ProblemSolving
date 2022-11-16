#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    gets(a);
    int i=0,j=0,k=0;
    while(a[i]!='\0')
    {
        if(a[i]!=' ')
        break;
        i++;
    }
    while(a[i]!='\0')
    {
        a[j]=a[i];
        j++;
        i++;
    }
    //printf("%c",a[j-1]);
    while(a[j-1]==' ')
        j--;
    a[j]='\0';
    printf("%s",a);
}
    
    
