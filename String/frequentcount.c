#include<stdio.h>
#include<string.h>
int DAt[60];
void main()
{
    char a[100];
    gets(a);
    int i=0;
    while(a[i]!='\0')
    {
        DAt[a[i]-'A']++;
        i++;
    }
    for(int j=0;j<60;j++)
    {
        if(DAt[j]!=0)
        printf("%c %d\n",(j+'A'),DAt[j]);
    }
}