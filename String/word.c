#include<stdio.h>
void main()
{
    char a[20];
    fgets(a,sizeof(a),stdin);
    int i=0;
    int w=0;
    while( a[i]!='\0')
    {
        if(a[i]==' ')
        w++;
        i++;
    }
    printf("No. of words=%d",(w+1));
    //printf("No. of words%d\n",i);
}