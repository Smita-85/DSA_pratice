/*insertion at the end in a doubly linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *preptr;
    struct node *nextptr;
}*stnode,*ennode;
void dll_creation(int);
void dll_insert_end(int);
void dll_display(int);
int main()
{
    int n,item,a;
    a=1;
    stnode=NULL;
    ennode=NULL;
    printf("\n\n Insertion at the end in a doubly linked list\n\n");
    printf("input no. of nodes:");
    scanf("%d",&n);
    dll_creation(n);
    dll_display(a);
    printf("enter the item you want to insert:");
    scanf("%d",&item);
    a=2;
    dll_insert_end(item);
    dll_display(a);
    return 0;
}
void dll_creation(int n)
{
    int i, num;
    struct node *fnNode;
 
    if(n >= 1)
    {
        stnode = (struct node *)malloc(sizeof(struct node));
 
        if(stnode != NULL)
        {
            printf(" Input data for node 1 : "); // assigning data in the first node
            scanf("%d", &num);
 
            stnode->num = num;
            stnode->preptr = NULL;
            stnode->nextptr = NULL;
            ennode = stnode;
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->preptr = ennode;    // new node is linking with the previous node
                    fnNode->nextptr = NULL;
                    ennode->nextptr = fnNode;   // previous node is linking with the new node
                    ennode = fnNode;            // assign new node as last node
                }
                else
                {
                    printf("memory cant be allocated");
                    break;
                }
            }
        }
    }
}
void dll_insert_end(int num)
{
    struct node * newnode;
 
    if(ennode == NULL)
    {
        printf(" No data found in the list!\n");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->num = num;
        newnode->nextptr = NULL;        
        newnode->preptr = ennode;        
        ennode->nextptr = newnode;     
        ennode = newnode;
    }
}


void dll_display(int a)
{
    struct node *tmp;                       
    int n=1;
    if(stnode==NULL)
    {
        printf("no data found in the list");
    }
    else
    {
        tmp=stnode;
        printf("\n data entered in the list are:");
        while(tmp!=NULL)
        {
            printf("node %d:%d\n",n,tmp->num);
            n++;
            tmp=tmp->nextptr;
        }
    }
}
