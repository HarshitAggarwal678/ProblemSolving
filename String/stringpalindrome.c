#include<stdio.h>
void main()
{
    char a[20];
    int i=0;
    int j=0;
    int k=0,f=0;
    scanf("%s",a);
    char rev[20];
    //char rev1[20];
    
    while(a[i]!='\0')
    {
       // printf("%d",i);
        //printf("%c",a[i]);
        i++;
    }
    //printf("%d",i);
    for( k=(i-1);k>=0;k--)
    {   
        rev[j]=a[k];
        //printf("%c",a[i]);
        j++;
    }
    rev[k]='\0';
   // printf("%s",rev);
    for(int z=0;z<i;z++)
    {
        if(rev[z]!=a[z])
        {
            f++;
            break;
        }
    }
    if(f>0)
    printf("not a palindrome");
    else
    printf("palindrome");


}