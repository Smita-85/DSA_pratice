/*DELETE THE LAST NODE OF A SINGLE LINKED LIST*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *nextptr;
} *stnode;
void createlist(int n);
void last_node_delete();
void display_list();
int main()
{
    int n,num;
    printf("enter number of nodes:");
    scanf("%d",&n);
    createlist(n);
    printf("data entered in the list are:\n");
    display_list();
    last_node_delete();
    printf("\n new list after deletion of last node:\n");
    display_list();
    return 0;
}
void createlist(int n)
{
    struct node *fnode,*tmp;
    int num,i;
    stnode=(struct node*)malloc(sizeof(struct node));
    if(stnode==NULL)
            {
                printf("memory cant be allocated");
            }
            else
            {
                printf("input data for node:");
                scanf("%d",&num);
                stnode->num=num;
                stnode->nextptr=NULL;
                tmp=stnode;
                for(i=2;i<=n;i++)
                {
                  fnode=(struct node *)malloc(sizeof(struct node));
                  if(fnode==NULL)
                  {
                    printf("memory cant be allocated");
                    break;
                  }
                  else{
                    printf("input data for node:");
                    scanf("%d",&num);
                    fnode->num=num;
                    fnode->nextptr=NULL;
                    tmp->nextptr=fnode;
                    tmp=tmp->nextptr;
                  }
                }
            }
}
void last_node_delete()
{
    struct node *todelete,*prenode;
    if(stnode==NULL)
    {
        printf("there is no element in the list");
    }
    else
    {
        todelete=stnode;
        prenode=stnode;
        while (todelete->nextptr!=NULL)
        {
            prenode=todelete;
            todelete=todelete->nextptr;
        }
        if(todelete==stnode)
        {
            stnode=NULL;
        }
        else
        {
            prenode->nextptr=NULL;
        }
        free(todelete);
        
    }
}
void display_list()
{
    struct node *tmp;
    if(stnode==NULL)
    {
        printf("no data found in the list");
    }
    else
    {
        tmp=stnode;
        while(tmp!=NULL)
        {
            printf("data:%d\n",tmp->num);
            tmp=tmp->nextptr;
        }
    }
}