#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[50];
    int i,j;
    printf("Enter String:");
    gets(str);
    strrev(str);
    for(i=0;str[i]!='\0';i++)
    {
       if(str[i+1]==' ' || str[i+1]=='\0')
        {
           for(j=i;j>=0 && str[j]!=' ';j--)
           {
               printf("%c",str[j]);
           }
        }
        printf(" ");
    }
    getche();
}



