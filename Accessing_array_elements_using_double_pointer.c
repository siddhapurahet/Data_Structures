#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[3][3]={5,4,7,8,9,1,2,3,4};
    int **p;
    int i,j;
    p=(int **)malloc(sizeof(int *));
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
                p[i]=&arr[i][0];

            printf("arr[%d][%d]=%d \t",i,j,*(*(p+i)+j));
        }
        printf("\n");
    }

}
