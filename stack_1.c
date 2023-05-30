/*stack operations using structure*/
#include<stdio.h>
#include<stdlib.h>
#define max 5 
void push();
void pop();
void display();
int isempty();
int isfull();

struct stack
{
    int sta[max];
    int top;
} s;
int main()
{
    int ch;
    s.top=-1;
    while(1)
    {
        printf("enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                  break;
            case 2:pop();
                  break;
            case 3:isempty();
                   break;
            case 4:isfull();
                   break;
            case 5:display();
                   break;
            case 6:exit(0);
            default:
                   printf("wrong choice");                                
        }
    }
    return 0;
}
void push()
{
    int data;
    if(s.top==max-1)
    {
        printf("stack overflow");
    }
    else{
        printf("enter data:");
        scanf("%d",&data);
         s.top++;
         s.sta[s.top]=data;
         printf("pushed element:%d",data);
    }
}
void pop()
{
    int x;
    if(s.top==-1)
    {
        printf("stack underflow");
    }
    else{
        s.sta[s.top]=x;
        s.top--;
    }
    printf("popped element:%d",x);
}
int isempty()
{
    if(s.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull()
{
    if(s.top==max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display()
{
    if(isempty()==1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("elements are:");
        for(int i=s.top;i>=0;i--)
        {
            printf("%d",s.sta[i]);
        }
    }
}        
