#include<stdio.h>
void main()
{
    char a[20];
    int i=0;
    int j=0;
    int k=0;
    scanf("%s",a);
    char rev[20];
    
    while(a[i]!='\0')
    {
        i++;
    }
    for( k=(i-1);k>=0;k--)
    {   
        rev[j]=a[k];
        j++;
    }
    rev[k]='\0';
    printf("%s",rev);
}