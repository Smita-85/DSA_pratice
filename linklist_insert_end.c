/*INSERTING AT THE END IN A SINGLY LINKED LIST*/
#include<stdio.h>
#include<stdlib.h>
struct node *add_at_end(struct node *head,int data);
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int data;
    printf("enter the data:");
    scanf("%d",&data);
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node*ptr=malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=NULL;

    add_at_end(head,data);

    return 0;
}
struct node *add_at_end(struct node *head,int data)
{
    struct node *ptr,*temp;
    temp=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    ptr->link=temp;
    

}
