/*linear queue operations using structure*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 5
void insert(int);
void delete();
bool isfull();
bool isempty();
void display();
struct queue
{
    int queue[max];
    int front;
    int rear;
}s;
int main()
{
    int choice,value;
    s.front=-1;
    s.rear=-1;
    while(1)
    {
        printf("\n1-insert\n2-delte\n3-display\n4-exit\n5-isfull\n6-isempty");
        printf("\nenter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the element you want to insert:");
                   scanf("%d",&value);
                   insert(value);
                   break;
            case 2:
                  delete();
                  break;
            case 3:
                  display();
                  break;
            case 4:
                  exit(0);
                  break;
            case 5:
                  isfull();
                  break;
            case 6:
                  isempty();
                  break;            
            default:
                 printf("\n invalid choice");                   
        }
    }
}
bool isfull()
{
    if(s.rear==max-1)
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
    if(s.front==-1||s.front>s.rear)
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
        if(s.front==-1)
        {
            s.front=0;
        }
        s.rear++;
        s.queue[s.rear]=value;
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
        value=s.queue[s.rear];
        s.front++;
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
        for(i=s.front;i<=s.rear;i++)
        {
            printf("%d",s.queue[i]);
        }
        printf("\n");
    }
}
