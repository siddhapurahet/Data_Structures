#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[3][3]={5,9,8,7,4,1,2,3,4};
    int *p;
    int i,j;
    p=(int *)malloc(sizeof(int));
    p=arr;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("arr[%d][%d]=%d \t",i,j,p[(i*3)+j]);
        }
        printf("\n");
    }

}

