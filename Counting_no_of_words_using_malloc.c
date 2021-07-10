#include<stdio.h>
void main()
{
    char *line;
    int i=0,count=0,flag=0;
    line=(char *)malloc(100*sizeof(char));
    printf("enter line");
    scanf("%[^\n]s",line);
    while(*(line+i)!='\0')
    {
        if(*(line+i)==' '  && flag==1)
        {
          flag=0;
        }
        else if(*(line+i)!=' ' && flag==0)
        {
            count++;
            flag=1;
        }
      i++;
   }
    printf("no of words are :%d",count);
}

