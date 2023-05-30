/*linear queue operations*/
#include<Stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 5
int queue[max];
int rear=-1,front=-1;
void insert(int);
void delete();
bool isfull();
bool isempty();
void display();
int main()
{
    int choice,value;
    while(1)
    {
        printf("\n1-insert\n2-delte\n3-display\n4-exit\n5-isfull\n6-isempty");
        printf("\nenter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case-1:printf("enter the element you want to insert:");
                   scanf("%d",&value);
                   insert(value);
                   break;
            case-2:
                  delete();
                  break;
            case-3:
                  display();
                  break;
            case-4:
                  exit(0);
                  break;
            case-5:
                  isfull();
                  break;
            case-6:
                  isempty();
                  break;            
            default:
                 printf("\n invalid choice");                   
        }
    }
}
bool isfull()
{
    if(rear==max-1)
    {
      return true;
    }
    else
    {
        return false;
    }
}
bool isempty()
{
    if(front==-1||front>rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void insert(int value)
{
    if(isfull())
    {
        printf("queue is full");
    }
    else{
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=value;
        printf("\nelement inserted:%d",value);
    }
}
void delete()
{
    int value;
    if(isempty())
    {
        printf("queue is empty");
    }
    else
    {
        value=queue[rear];
        front++;
        printf("\ndeleted element:%d",value);
    }
}
void display()
{
    int i;
    if(isempty())
    {
        printf("queue is empty");
    }
    else{
        printf("\nqueue elements:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
        printf("\n");
    }
}
