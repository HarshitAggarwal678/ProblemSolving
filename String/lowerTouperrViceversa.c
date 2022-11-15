//Program for converting all lower case letters to upper case and vice versa in the given sentence
#include<stdio.h>
void main()
{
    char a[20];
    fgets(a,sizeof(a),stdin);
    int i=0;
    while( a[i]!='\0')
    {
        if(a[i]>='a'&&a[i]<='z')
            a[i]=a[i]-32;
        else if(a[i]>='A'&&a[i]<='Z')
            a[i]=a[i]+32;
        i++;
    }
    printf("%s",&a);
}
