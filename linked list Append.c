#include<stdio.h>

struct node
{
    int data;
    struct node *link;
};

void linkedlist(struct node *);

int main()
{
    struct node *temp=NULL;
    struct node *root=NULL;
    struct node *p=NULL;
    int x;
    printf("Enter number of nodes :");
    scanf("%d",&x);
    while(x>0)
    {
        temp=(struct node *)malloc(sizeof(struct node)*1);
        temp->link=NULL;
        printf("\nEnter nodes :");
        scanf("%d",&(temp->data));
        if(root==NULL)
        {
            root=temp;
        }
        else
        {
            struct node *p;
            p=root;
            while((p->link)!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }
        linkedlist(root);
        x--;

    }
    linkedlist(root);
}
void linkedlist(struct node *p)
{
    struct node *temp;
    temp=p;
    while(temp!=NULL)
    {
     printf("%d -> ",temp->data);
     temp=temp->link;
    }
}
